#include <bits/stdc++.h>
using namespace std;

string numberToWords(int n)
{
    string belowTen[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string belowTwenty[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string belowHundred[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (n == 0)
        return "Zero";

    if (n < 10)
    {
        return belowTen[n];
    }
    if (n < 20)
    {
        return belowTwenty[n - 10];
    }

    if (n < 100)
    {
        return belowHundred[(n / 10)] + (n % 10 != 0 ? " " + belowTen[(n % 10)] : "");
    }
    if (n < 1000)
    {
        return belowTen[(n / 100)] + " " + "Hundred" + (n % 100 != 0 ? " " + numberToWords(n % 100) : "");
    }
    if (n < 1000000)
    {
        return numberToWords(n / 1000) + " " + "Thousand" + (n % 1000 != 0 ? " " + numberToWords(n % 1000) : "");
    }
    if (n < 1000000000)
    {
        return numberToWords(n / 1000000) + " " + "Million" + (n % 1000000 != 0 ? " " + numberToWords(n % 1000000) : "");
    }
    return numberToWords(n / 1000000000) + " " + "Billion" + (n % 1000000000 != 0 ? " " + numberToWords(n % 1000000000) : "");
}
int main()
{
    cout<<numberToWords(234223423);
    return 0;
}