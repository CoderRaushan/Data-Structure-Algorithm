#include<iostream>
using namespace std;
bool IsAuthmorphic(int n)
{
    int original=n;//25
    int square=n*n;//625
    while(n>0)
    {
        int digit=n%10;//5
        int sqDigit=square%10;
        if(digit!=sqDigit)
        {
            return false;
        }
        n/=10;
        square/=10;
    }
    return true;
}
int main()
{
    cout<<IsAuthmorphic(5);
    return 0;
}