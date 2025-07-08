#include<iostream>
#include<vector>
using namespace std;
void RemoveDuplicateString(string s)
{
    vector<bool>v(26,false);
    string res="";
    for(int i=0;i<s.size();i++)
    {
        if(v[s[i]-'a']==false)
        {
            res+=s[i];
            v[s[i]-'a']=true;
        }
    }
    cout<<res;
}
int main()
{
 RemoveDuplicateString("cbacdcbc");
return 0;
}