#include<iostream>
#include<set>  //order
#include<map>
using namespace std;

int main()
{
    set<int>s;
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(7);
    s.insert(8);
    // ordered set takes O(log n) time complixity
    //since it is ordered set that's why it will be printed into ordered manner in increasing order
    for(auto ele:s)
    {
        cout<<ele<<endl;
    }


    // ordered map
    map<int,int>m;
    m[5]=20;
    m[2]=30;
    m[1]=60;
    m[4]=50;
    m[3]=90;
    for(auto val:m)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
    return 0;
}