// #include <iostream>
// using namespace std;

// void Divisor(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << " " << i;
//         }
//     }
// }

// int main()
// {
//     int n = 6;
//     cout << "Factors of " << n << " are: ";
//     Divisor(n);
//     return 0;
// }
/*
Output: Factors of 6 are: 1 2 3 6

Time Complexity: O(N)

Space Complexity: O(1)

*/

// 2nd approach
#include <bits/stdc++.h>
using namespace std;
void Divisor(int n)
{
    // if u will not get it go to this article u can definitely get this
    // https://takeuforward.org/combinatorics/factors-of-a-given-number/
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal, print only one
            if (n / i == i)
            {
                cout << " " << i;
            }
            else // Otherwise print both
            {
                cout << " " << i << " " << n / i;
            }
        }
    }
}
int main()
{
    int n = 60;
    cout << "Factors of " << n << " are: ";
    Divisor(n);
    return 0;
}