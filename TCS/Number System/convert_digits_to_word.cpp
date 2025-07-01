#include <bits/stdc++.h>
using namespace std;
// assuming give digits are maximum of 4 digits case 4
//  what about case 1 ,2,3
/*
case 1: 2
case 2: 34
case 2: 644
case 4: 3452
*/
void digitsToWord(string str)
{
    string ans = "";
    string singleDigit[] = {"zero", "one", "tow", "three", "four", "five", "six", "seven", "eight", "nine"};
    string twodigits[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen", "twelve"};
    string DoubleDigit[] = {"ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninghty"};
    // case 1
    if (str.length() == 1)
    {

        int pos = str[0] - '0';
        ans = ans + singleDigit[pos];
    }
    // case 2
    if (str.length() == 2)
    {
        int temp = 0;
        temp = temp * 10 + (str[0] - '0');
        temp = temp * 10 + (str[1] - '0');
        if (temp <= 20)
        {
            int pos = temp - 10;
            ans = ans + twodigits[pos];
        }
        if (temp > 20 && temp < 100)
        {
            ans = ans + DoubleDigit[(str[0] - '0') - 1] + " ";
            ans = ans + singleDigit[(str[1] - '0')];
        }
    }
    // case 3
    if (str.length() == 3)
    {
        ans = ans + singleDigit[str[0] - '0'] + " hundred "; // iss position wala hamesha hundred dega
        int temp = 0;
        temp = temp * 10 + (str[1] - '0');
        temp = temp * 10 + (str[2] - '0');
        if (temp < 21)
        {
            int pos = temp - 10;
            ans = ans + twodigits[pos];
        }

        if (temp > 20)
        {
            if (str[1] - '0' != 0)
            {
                ans = ans + DoubleDigit[(str[1] - '0') - 1] + " ";
            }
            if (str[2] - '0' != 0)
            {
                ans = ans + singleDigit[(str[2] - '0')];
            }
        }
    }
    // this is for case 4 when str length is equal to 4
    if (str.length() == 4)
    {
        int first = str[0] - '0'; // iss position wala hamesha thousand dega
        ans = ans + singleDigit[first] + " thousand";
        // hundred  wala kaam
        int second = str[1] - '0'; // iss position wla hamesha hundred hoga
        ans = ans + " " + singleDigit[second] + " hundred";
        int temp = 0;
        temp = temp * 10 + (str[2] - '0');
        temp = temp * 10 + (str[3] - '0');
         if (temp<10)
        {
            ans=ans+" zero";
            ans = ans +" "+ singleDigit[str[3]-'0'];
        }
        if (temp>9 && temp < 21)
        {
            int pos = temp - 10;
            ans = ans +" "+ twodigits[pos];
        }

        if (temp > 20)
        {
            if (str[1] - '0' != 0)
            {
                ans = ans + DoubleDigit[(str[1] - '0') - 1] + " ";
            }
            if (str[2] - '0' != 0)
            {
                ans = ans + singleDigit[(str[2] - '0')];
            }
        }
        // // two digit wala
        // int third = str[2] - '0';
        // ans = ans + " " + DoubleDigit[third - 1];
        // // last wla single digit
        // int fourth = str[3] - '0';
        // if (fourth != 0)
        // {
        //     ans = ans + " " + singleDigit[fourth];
        // }
    }

    cout << ans;
}
int main()
{
    digitsToWord("4001");
    return 0;
}