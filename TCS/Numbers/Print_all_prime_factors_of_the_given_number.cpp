
#include <bits/stdc++.h>
using namespace std;
bool ISPrime(int n)
{

}
void Divisor(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal, print only one
            if (n / i == i)
            {
                ISPrime
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