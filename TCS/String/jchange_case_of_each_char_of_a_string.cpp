#include<bits/stdc++.h>
using namespace std;
void chageCase(string s)
{
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            ans+=char(int(s[i])-32);
        }else if(s[i]>='A' && s[i]<='Z')
        {
            ans+=char(int(s[i])+32);
        }
        else  
        {
            ans+=" ";
        }
    }
    cout<<ans;
}
int main()
{
 chageCase("take u forward IS Awesome");
 return 0;
}
