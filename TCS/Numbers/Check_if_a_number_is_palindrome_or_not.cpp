//note what is palindrom number =>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=22223;
    int original=n;
    int newValue=0;
    while(n>0)
    {
        int lastone=n%10;
        newValue=newValue*10+lastone;
        n=n/10;
    }
    cout<<"original number is "<<original<<endl;
    cout<<"new value is "<<newValue<<endl;
    if(original==newValue)
    {
        cout<<"palindrome number"<<endl;
    }
    else
    {
        cout<<"not palindrome number"<<endl;
    }
    return 0;
}