#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str2 = "hello";
    string str1 = "az";
    int idx=0;
    for(int i=0;i<str2.length();i++)
    {
        for(int j=0;j<str1.length();j++)
        {
            if(str2[i]==str1[j])
            {
                idx=j;
                break;
            }
        }
        if(idx!=0)break;
    }
    if(idx==0)idx=-1;
    cout<<idx;

    return 0;
}