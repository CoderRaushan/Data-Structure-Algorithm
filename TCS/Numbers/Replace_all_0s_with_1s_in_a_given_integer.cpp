//method 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=102003;
//     string str=to_string(n);
//     cout<<"before ";
//     cout<<str;
//     cout<<" After ";
//     for(int i=0;i<str.length();i++)
//     {
//         if(str[i]=='0')
//         {
//             str[i]='1';
//         }
//     }
//     int newvalue=stoi(str);
//     cout<<newvalue;

//     return 0;
// }
//method 2 
#include<iostream>
using namespace std;
int main()
{
    int n=102003;
    int rev=0;
    while(n>0)
    {
        int extract=n%10;
        if(extract==0)
        {
            extract+=1;
        }
        rev=10*rev+extract;
        n/=10;
    }
    int newvalue=0;
    while(rev>0)
    {
        newvalue=10*newvalue+(rev%10);
        rev/=10;
    }
    cout<<newvalue;
    return 0;
}