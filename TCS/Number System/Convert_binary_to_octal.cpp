#include<iostream>
using namespace std;
// what is ocatal 
/*
🧠 Compare with other number systems:
Number System	Base	Digits     Used	Example
Binary	          2      0, 1	    1011
Octal	          8	     0 to 7	    127
Decima            10	 0 to 9	    234
Hexadecimal	      16   0–9 and A–F	1F3

how to convert binary to octal 
group the given binary bits in the 
bunch of 3 from right side
and convert each bunch in to decimal
and append each decimal values into a variable 
form right side 

*/
int powefunction(int a,int b)
{
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
// binary can be of 
/*
one digit 1
two digit 01
three digit 001
four digit 0111
......
1111111
n%

*/
void createBunch(string s)
{
    if((s.length()%3)==2)
    {
        s="0"+s;
    }
    if((s.length()%3)==1)
    {
        s="00"+s;
    }
    int n=s.length()-1;
    int i=0;
    int data=0;
    
    while(i<n)
    {
        data=data*10+ConvertBinarytoDecimail(s.substr(i,3));
        i+=3;
    }  
    cout<<data;
}
int main()
{
    createBunch("1100110");
    return 0;
}

