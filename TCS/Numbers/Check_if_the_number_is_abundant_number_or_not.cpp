// If the sum of divisors of a number is greater than the number then it is called abundant number.
/*
Example 1:
Input: 18
Output: Abundant Number
Explanation: Divisors of 18 are 1,2,3,6,9. 1+2+3+6+9=21, Since 21 is greater than 18, 18 is an abundant number.

Example 2:
Input: 21
Output: Not Abundant Number
Explanation:Divisors of 21 are 1,3,7. 1+3+7=11, Since 11 is smaller than 21, 11 is not an abundant number.
*/

#include <iostream>
#include <math.h>
using namespace std;
bool Abundant(int n)
{
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                if (i != n)
                {
                    sum += i;
                }
            }
            else
            {
                if (i != n)
                {
                    sum += i;
                }

                if ((n / i) != n)
                {
                    sum += n / i;
                }
            }
        }
    }
    return sum > n;
}
int main()
{
    int n = 18;
    cout << Abundant(n);
    return 0;
}