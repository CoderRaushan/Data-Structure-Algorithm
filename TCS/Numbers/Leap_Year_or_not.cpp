#include<bits/stdc++.h>
using namespace std;
int main()
{
// statement of leap year
//1st if year is divisible by 400 =>1
//2nd if year is divisible by 4 then the year should not divisible by 100
int year=2024;
 if((year%400==0) || ((year%4==0) && (year%100 !=0)))
 {
    cout<<"Leap Year";
 }
 else 
 {
    cout<<"Not a Leap Year";
 }
return 0;
}