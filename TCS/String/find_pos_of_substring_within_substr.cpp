#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = "hello";
    string str2 = "az";
    int idx = 0;
    char match = str1[0];
    for (int j = 0; j < str2.length(); j++)
    {
        if (str2[j] == match)
        {
            idx = j;
            break;
        }
    }
    if (idx == 0)
        idx = -1;
    cout << idx;

    return 0;
}