#include <bits/stdc++.h>
using namespace std;
int sumOfIntegers(string &st, int l)
{
    string tempSum = "";
    int sum = 0;
    for (int i = 0; i < l; i++)
    {

        if (st[i] >= '0' && st[i] <= '9')
        {
            tempSum += st[i];
        }
        else if (!tempSum.empty())
        {
            sum += stoi(tempSum);
            tempSum = "";
        }
    }
    if (!tempSum.empty())
    {
        sum += stoi(tempSum);
    }

    return sum;
}
int main()
{

    string st = "123abc17";
    int l = st.length();
    cout << "Sum: ";
    cout << sumOfIntegers(st, l);
    return 0;
}