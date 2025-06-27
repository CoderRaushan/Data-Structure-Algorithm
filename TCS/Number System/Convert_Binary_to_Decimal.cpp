// #include<iostream>
// using namespace std;
// int powefunction(int a,int b)
// {
//     if(b<0)
//     {
//         return 0;
//     }
//     if(b==0)
//     {
//         return 1;
//     }
//    return a*powefunction(a,b-1);
// }
// int ConvertBinarytoDecimail(int n)
// {
//     int sum=0;
//     int idx=0;
//     while(n>0)
//     {
//         int lastDigit=n%10;
//         sum=sum+int(powefunction(2,idx))*lastDigit;
//         idx++;
//         n/=10;
//     }
//     return sum;
// }
// int main()
// {
//     cout<<ConvertBinarytoDecimail(1111);
//     return 0;
// }



// using string 
#include<iostream>
using namespace std;
int powefunction(int a,int b)
{
    if(b<0)
    {
        return 0;
    }
    if(b==0)
    {
        return 1;
    }
   return a*powefunction(a,b-1);
}
int ConvertBinarytoDecimail(string str)
{
    int sum=0;
    int idx=0;
    for(int i=str.length()-1;i>=0;i--)
    {
        sum+=powefunction(2,idx)*(str[i]-'0');
        idx++;
    }
    return sum;
}
int main()
{
    cout<<ConvertBinarytoDecimail("100");
    return 0;
}