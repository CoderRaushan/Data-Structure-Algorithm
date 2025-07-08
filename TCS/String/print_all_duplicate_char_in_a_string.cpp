#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void PrintDuplicateStringM2(string s)
{
  vector<int>v(26,0);
  for(int i=0;i<s.size();i++)
  {
     v[(s[i]-'a')]++;
  }
  for(int i=0;i<26;i++)
  {
     if(v[i]>=2)
     {
        cout<<char(i+'a')<<" "<<v[i]<<endl;
     }
  }

  
}
void PrintDuplicateString(string s)
{
    sort(s.begin(),s.end());//aabdddeffg
   int cnt=1;
   char ch;
   for(int i=0;i<s.size();i++)
   {
        if(s[i]==s[i+1])
        {
            cnt++;
        }else
        {
            ch=s[i];
            if(cnt>=2)
            {
                cout<<ch<<" "<<cnt<<endl;
            }
            cnt=1;
        } 
   }
}
int main()
{
 PrintDuplicateStringM2("sinstriiintng");
return 0;
}