#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * n - 1); j++)
        {
            int karna=n+j-i;
            int idx=1;
            if (j <= n)
            {
                if (j > i - 1 && j < ((2 * n + 1) - i))
                {
                    cout <<(n-i)+j;
                }
                else
                {
                    cout << " ";
                }
            }
            else 
            {
                
                if (j > i - 1 && j < ((2 * n + 1) - i))
                {
                    cout <<((n-i)+j)-idx;
                    // idx++;
                }
                else
                {
                    cout << " ";
                    // idx++;
                }
            }
        }
        cout << endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=9;
//     int a=0;
//     for(int i=4;i>0;i--)
//     {
//         for(int b=0;b<a;b++)
//         {
//             cout<<" ";
//         }
//         for(int j=i;j<(2*i);j++)
//         {
//             cout<<j;
//         }
//         for(int k=i-1;k>0;k--)
//         {
//             cout<<i+k-1;
//         }
//         cout<<endl;
//         a++;
//     }
//     return 0;
// }
