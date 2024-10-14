#include<iostream>
using namespace std;
//include map
int main()
{
    // see baiscs of pair
    // <int,int>
    pair<int,int>p;
    p.first=3;
    p.second=4;
    cout<<p.first<<" "<<p.second<<endl;
    //<string,int>
    pair<string,int>pr;
    pr.first="age:";
    pr.second=20;
    cout<<pr.first<<" "<<pr.second<<endl;
    //<char,int>
    pair<char,int>prr;
    prr.first='A';
    prr.second=95;
    cout<<prr.first<<" "<<prr.second<<endl;

    // staring with map

    // video : 45:25


    return 0;
}
