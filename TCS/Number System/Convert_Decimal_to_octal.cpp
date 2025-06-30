#include <bits/stdc++.h>
using namespace std;
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
void createBunch(string s)
{
    if ((s.length() % 3) == 2)
    {
        s = "0" + s;
    }
    if ((s.length() % 3) == 1)
    {
        s = "00" + s;
    }
    int n = s.length() - 1;
    int i = 0;
    int data = 0;

    while (i < n)
    {
        data = data * 10 + ConvertBinarytoDecimail(s.substr(i, 3));
        i += 3;
    }
    cout << data;
}
void deceimalToBinary(int n)
{
    int divide = n;
    string str = "";
    while (divide > 0)
    {
        int question = divide / 2;
        int reminder = divide % 2;
        if (reminder == 0)
        {
            str = str + "0";
        }
        else
        {
            str = str + "1";
        }
        divide = question;
    }
    reverse(str.begin(), str.end());
    createBunch(str);
}
int main()
{
    deceimalToBinary(45);
    return 0;
}