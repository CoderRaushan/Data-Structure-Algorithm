// #include<bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
// n=153
// step 1 is to find total no fo digits is how much  here digits are 3  let take it x=3
// setp 2  extreact each digits from number and multiply itself x times
// indirectly u can say pow it x times
// and sum it with all digits of each number and at last compate it with original number

bool isArmstrongNUmbetr(int n)
{
    int x = 0;
    int n1 = n;
    int original = n;
    while (n1 > 0)
    {
        n1 /= 10;
        x++;
    }
    int sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum = sum + round(pow(lastdigit, x));
        n /= 10;
    }
    return original == sum;
}
int main()
{
    if(isArmstrongNUmbetr(153))
    {
        cout<<"An armstrong number!"<<endl;
    }
    else 
    {
        cout<<"Not an armstrong number!"<<endl;
    }
    return 0;
}