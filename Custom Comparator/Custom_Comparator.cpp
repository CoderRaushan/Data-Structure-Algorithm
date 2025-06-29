// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool cmp(int a, int b) {
//     return a > b;  // Descending
// }

// int main() {
//     vector<int> v = {5, 2, 9, 1};
//     sort(v.begin(), v.end(), cmp);
//     for (int x : v) cout << x << " ";
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    vector<pair<int, int>> v = {{1, 2}, {3, 1}, {2, 4}};
    sort(v.begin(), v.end(), cmp);
    for (auto p : v) cout << "{" << p.first << "," << p.second << "} ";
    return 0;
}
    
