#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    // 1. Declaration
    vector<vector<int>> v; // empty 2D vector

    // 2. Initialization
    vector<vector<int>> v1(4);                    // 4 rows, each empty
    vector<vector<int>> v2(4, vector<int>(4));    // 4x4 with default 0
    vector<vector<int>> v3(4, vector<int>(4, 7)); // 4x4 filled with 7

    // 3. Adding elements (push_back)
    vector<vector<int>> v;
    v.push_back({1, 2, 3}); // row 0
    v.push_back({4, 5, 6}); // row 1

    // 5. Iterating
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    // 6. Dynamic resize
    vector<vector<int>> v(3, vector<int>(3, 0)); // 3x3 all zeros
    v[0][1] = 5;                                 // change element
    v[2].push_back(9);                           // add extra element in row 2

    cout << v[0][0];
    return 0;
}