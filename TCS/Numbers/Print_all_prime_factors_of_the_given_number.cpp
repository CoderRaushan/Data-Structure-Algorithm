
#include <bits/stdc++.h>
using namespace std;
bool ISPrime(int n)
{
    if (n <= 1)
        return false;
    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            return isPrime;
        }
    }
    return isPrime;
}
void Divisor(int n)
{
    //To solve this problem there is two sets 
    //1 st is cheeck for 1 to the given number itself that whether it is divisible 
    //2nd by and i or not if yes then again check that i to check i is a prime or not 
    for (int i = 1; i <=n; i++)
    {
        if (n % i == 0)
        {
            if (ISPrime(i))
            {
                cout << i << " ";
            }
        }
    }
}
int main()
{
    int n = 780;
    cout << "Factors of " << n << " are: ";
    Divisor(n);
    return 0;
}