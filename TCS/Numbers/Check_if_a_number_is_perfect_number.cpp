#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 15;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        cout << n << " Is a perfect Number!";
    }
    else
    {
        cout << n << " Is not a perfect Number!";
    }
    return 0;
}