// #include <bits/stdc++.h>
// using namespace std;
// #include <string>
// void Capitalize(string str)
// {
//     for (int i = 0; i < str.length()-1; i++)
//     {
//         if (((int)str[i] >= 97 && i == 0) || i == str.length() - 1)
//         {
//             str[i] = ((char)((int)str[i] - 32));
//         }
//         if (str[i] == ' ')
//         {
//             if (i>0 && (int)str[i - 1] >= 97)
//             {
//                 str[i - 1] = (char)str[i - 1] - 32;
//             }
//             if (i<str.length()-1 && (int)str[i + 1] >= 97)
//             {
//                 str[i + 1] = (char)str[i + 1] - 32;
//             }
//         }
//     }
//     cout<<str;
// }
// int main()
// {
//     string str = "Take u forward is awesomE";
//     Capitalize(str);

//     return 0;
// }
//optimal version
#include <bits/stdc++.h>
using namespace std;

void Capitalize(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        // Capitalize first and last character
        if ((i == 0 || i == str.length() - 1) && islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }

        // Capitalize characters around spaces
        if (str[i] == ' ')
        {
            if (i > 0 && islower(str[i - 1]))
            {
                str[i - 1] = toupper(str[i - 1]);
            }
            if (i < str.length() - 1 && islower(str[i + 1]))
            {
                str[i + 1] = toupper(str[i + 1]);
            }
        }
    }
    cout << str << endl;
}

int main()
{
    string str = "take u forward is awesomE";
    Capitalize(str);
    return 0;
}
