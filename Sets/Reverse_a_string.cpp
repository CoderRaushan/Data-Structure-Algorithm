#include <iostream>
using namespace std;
string reverseString2(string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }
    return s;
}
string reverseString1(string &s)
{
    int n = s.length();
    int j = n - 1;
    string result = "";
    while (j !=-1)
    {
        result = result + s[j];
        j--;
    }
    return result;
}
int main()
{
    string s = "ABCDEFGHI";
    
    cout << "using while loop "<<reverseString1(s);
    cout<<endl;
     cout <<"using for loop " <<reverseString2(s);
    return 0;
}