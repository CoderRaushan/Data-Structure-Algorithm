#include<iostream>
#include<set>  //ordered
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

     map<string,int>m1;
     m1["Raushan"]=54;
     m1["Reul"]=56;
     m1["Rghan"]=58;
     m1["Rbhul"]=60; // it will print it in lexographical order 
     for(auto val:m1)
     {
        cout<<val.first<<" "<<val.second<<endl;
    }
    
    return 0;
}