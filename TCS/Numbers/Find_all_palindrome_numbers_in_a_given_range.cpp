// note what is palindrom number =>
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
    int original = n;
    int newValue = 0;
    while (n > 0)
    {
        int lastone = n % 10;
        newValue = newValue * 10 + lastone;
        n = n / 10;
    }
    return original == newValue;
}
int main()
{
    int n = 22223;
    for (int i = 1; i <= 1000; i++)
    {
        if (isPalindrome(i))
        {
            cout <<i<<" ";
        }
    }
    return 0;
}//tme complexity is = O(1)×O(logn)=O(logn)