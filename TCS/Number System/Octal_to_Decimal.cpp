#include<bits/stdc++.h>
using namespace std;
/*
Octal 445 to Decimal
fr
=4×8^2+4×8^1+5×8^0
=4×64+4×8+5×1
=256+32+5=293
​

*/

void octalToDecimal(int oct)
{
    int ans=0;
    int idx=0;
    while(oct>0)
    {
        ans=ans+(oct%10)*(int)pow(8,idx);
        idx++;
        oct/=10;
    }
    cout<<ans;
}
int main()
{
 octalToDecimal(445);
 return 0;
}