
#include<bits/stdc++.h>
using namespace std;
void deceimalToBinary(int n)
{
    string str="";
    if(n==0)
    {
        str="0";
    }
    int divide=n;
    while(divide>0)//293
    {
       int question=divide/2;
       int reminder=divide%2;
       if(reminder==0)
       {
        str=str+"0";
       }
       else
       {
        str=str+"1";
       }
       divide=question;
    }
    reverse(str.begin(),str.end());
    if(str.length()<8)
    {
        str=string(8-(str.length()),'0')+str;
    }
    cout<<str;
}

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
    deceimalToBinary(ans);
}
int main()
{
 octalToDecimal(345);
 return 0;
}