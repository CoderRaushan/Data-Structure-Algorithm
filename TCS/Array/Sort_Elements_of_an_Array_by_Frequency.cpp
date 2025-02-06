#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
using namespace std;
vector<int> frequencySort(vector<int> &v)
{
    vector<int> ans;           // not cou
    unordered_map<int, int> m; // space complexity=O(n)
    for (auto it : v)          // Time complexity=O(n)
    {
        m[it]++;
    }
    vector<pair<int, int>> p; // space complexity=O(n)
    for (auto it : m)         // space complexity=O(n)
    {
        p.push_back({it.second, it.first});
    }
    sort(p.begin(), p.end(),
        [&](pair<int, int> a, pair<int, int> b)
        {
            if (a.first == b.first)
            {
            return a.second > b.second; // Sort by value in descending order
            }
            else
            {
            return a.first < b.first; // Sort by frequency in ascending order
            }
        });          // sorting tc=O(nlogn)+for lembda function TC=
    for (auto it : p) // Time complexity=O(n)
    {
        while (it.first) // Time complexity=O(k)
        {
            ans.push_back(it.second);
            it.first--;
        }
    }
    return ans;
}
// tc=O(nlogn)
// tcO(n)
int main()
{
    vector<int> v = {1, 1, 2, 2, 2, 3};
    vector<int> ans = frequencySort(v);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}