#include<bits/stdc++.h>
using namespace std;
void deceimalToBinary(int n)
{
    int divide=n;
    string str="";
    while(divide>0)
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
    cout<<str;
}
int main()
{
 deceimalToBinary(15);
 return 0;
}