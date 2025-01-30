#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string ch = "A man, a plan, a canal: Panama";
    string result="";
    for (int i = 0; i < ch.size(); i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z' || ch[i] >= 'a' && ch[i] <= 'z' || ch[i] >= '0' && ch[i] <= '9')
        {
            if (ch[i] >= 'A' && ch[i] <= 'Z')
            {
                result=result+char(int(ch[i]) + 32);
            }
            else
            {
                result=result+ch[i];
            }
        }
    }
    int i=0;
    int j = result.size() - 1;
    while (i<j)
    {
        if(result[i]!=result[j])
        {
            cout<<"Not a palindrome";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"Palindrome";
    return 0;
}
