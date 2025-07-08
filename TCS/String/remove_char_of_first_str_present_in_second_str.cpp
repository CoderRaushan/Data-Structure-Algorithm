#include <iostream>
#include <vector>
using namespace std;

void presentInSecond(string str1, string str2)
{
    vector<bool> isPresent(26, false);

    // Mark characters present in str2
    for (char ch : str2)
    {
        isPresent[ch - 'a'] = true;
    }

    // Print characters of str1 not present in str2
    for (char ch : str1)
    {
        if (!isPresent[ch - 'a'])
        {
            cout << ch;
        }
    }
}

int main()
{
    presentInSecond("abcdef", "cefz");
    cout << endl;

    presentInSecond("xyzpw", "lmno");
    cout << endl;

    return 0;
}
