#include <bits/stdc++.h>
using namespace std;

void nonRepeatingSorted(string s)
{
    int freq[26] = {0};
    for (char c : s)
        freq[c - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 1)
        {
            cout << char(i + 'a') << " ";
        }
    }
    cout << endl;
}

int main()
{
    nonRepeatingSorted("yahoo"); // Output: a h y
    return 0;
}
