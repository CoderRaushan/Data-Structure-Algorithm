// #include <bits/stdc++.h>
// using namespace std;
// void reverseString(string s)
// {
//     vector<string> v;//n
//     string str = "";
//     int n = s.size() - 1;
//     for (int i = 0; i < s.size(); i++)//n
//     {
//         if (s[i] != ' ')
//         {
//             str += s[i];
//             if (i == n)
//             {
//                 v.push_back(str);
//                 str = "";
//             }
//         }
//         else
//         {
//             v.push_back(str);
//             v.push_back(" ");
//             str = "";
//         }
//     }
//     reverse(v.begin(),v.end());//nlogn
//     for (auto it : v)
//     {
//         cout << it;
//     }
// }
// int main()
// {
//     reverseString("this is an amazing program");

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void reverseString(string s)
// {
//     stack<string> st; // n
//     string str = "";
//     int n = s.size() - 1;
//     for (int i = 0; i < s.size(); i++) // n
//     {
//         if (s[i] == ' ')
//         {
//             st.push(str);
//             str = "";
//         }
//         else
//         {
//             str += s[i];
//         }
//     }
//     if (!str.empty())
//     {
//         st.push(str);
//         str = "";
//     }
//     while (!st.empty())
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }
// }
// int main()
// {
//     reverseString("this is an amazing program");

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void reverseString(string s)
{
    string temp = "";
    string res="";
    int n = s.size() - 1;
    for (int i = 0; i < s.size(); i++) // n
    {
        if (s[i] == ' ')
        {
            if(res=="")
            {
              res+=temp;
            }else
            {
                res=temp+" "+res;
            }
            temp="";
        }
        else
        {
            temp += s[i];
        }
    }
    if(res!="")
    {
        res=temp+" "+res;
    }
    cout<<res;
}
int main()
{
    reverseString("this is an amazing program");
    return 0;
}