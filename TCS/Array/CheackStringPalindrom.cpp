//broute force approach

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     string ch = "A man, a plan, a canal: Panama";
//     string result="";
//     for (int i = 0; i < ch.size(); i++)
//     {
//         if (ch[i] >= 'A' && ch[i] <= 'Z' || ch[i] >= 'a' && ch[i] <= 'z' || ch[i] >= '0' && ch[i] <= '9')
//         {
//             if (ch[i] >= 'A' && ch[i] <= 'Z')
//             {
//                 result=result+char(int(ch[i]) + 32);
//             }
//             else
//             {
//                 result=result+ch[i];
//             }
//         }
//     }
//     int i=0;
//     int j = result.size() - 1;
//     while (i<j)
//     {
//         if(result[i]!=result[j])
//         {
//             cout<<"Not a palindrome";
//             return 0;
//         }
//         i++;
//         j--;
//     }
//     cout<<"Palindrome";
//     return 0;
//time complexity=O(n)+O(n)==O(n)
//Final Space Complexity: O(n)
// }
//optimal approach
#include <iostream>
using namespace std;
bool isPalindrome(string ch) 
    {
        int i=0;
        int j=ch.size()-1;
       while(i<j)
        {
            while(i<j && !((ch[i] >= 'A' && ch[i] <= 'Z') || ( ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= '0' && ch[i] <= '9')))
            {
              i++;
            }
            while(i<j && !((ch[j] >= 'A' && ch[j] <= 'Z') || ( ch[j] >= 'a' && ch[j] <= 'z') || (ch[j] >= '0' && ch[j] <= '9')))
            {
              j--;
            }
            char first;
            char second;
            if (ch[i] >= 'A' && ch[i] <= 'Z')
            {
                first=(int(ch[i]) + 32);
            }
            else 
            {
                first=ch[i]; 
            }
             if (ch[j] >= 'A' && ch[j] <= 'Z')
            {
                second=(int(ch[j]) + 32);
            }
            else
            {
                second=ch[j];
            }
            if(first != second)
            {
                return false;
            }
            i++;
            j--;
        }
    return true;
    }
using namespace std;
int main()
{
    string str="A man, a plan, a canal: Panama";
    int ans=isPalindrome(str);
    if(ans)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not a palindrome";
    }
    return 0;
    //tc=O(n)+O(n)=O(n)== O(n)
    //Final Space Complexity: O(1) (Constant)
}


