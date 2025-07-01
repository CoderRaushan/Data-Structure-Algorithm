#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to return the maximum number of non-overlapping meetings
int maxMeetings(vector<int>& start, vector<int>& end) {
    int n = start.size();
    vector<pair<pair<int, int>, int>> meetings;

    for (int i = 0; i < n; i++) {
        meetings.push_back({{end[i], start[i]}, i + 1});
    }

    // Sort by end time (primary) and index (optional if tie)
    sort(meetings.begin(), meetings.end(), [](pair<pair<int, int>, int> p1, pair<pair<int, int>, int> p2) {
        return p1.first.first < p2.first.first;
    });

    vector<int> ans;
    int lastEnd = 0;

    for (auto& it : meetings) {
        int st = it.first.second;
        int en = it.first.first;
        int idx = it.second;

        if (st >= lastEnd) {
            ans.push_back(idx);
            lastEnd = en;
        }
    }

    // Print the order of meetings
    cout << "Order of meetings: ";
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return ans.size();
}

int main() {
    int n;
    cout << "Enter number of meetings: ";
    cin >> n;

    vector<int> start(n), end(n);
    cout << "Enter start times: ";
    for (int i = 0; i < n; i++) cin >> start[i];

    cout << "Enter end times: ";
    for (int i = 0; i < n; i++) cin >> end[i];

    int count = maxMeetings(start, end);
    cout << "Maximum number of meetings that can be held: " << count << endl;

    return 0;
}
