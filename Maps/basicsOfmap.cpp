#include<iostream>
#include<unordered_map>
using namespace std;
//include map just like vector<int>v;
int main()
{
    // see baiscs of pair
    // <int,int>
    //Method 1 to deal with map
    pair<string,int>p1;
    p1.first="Raushan";
    p1.second=104;
    // cout<<p1.first<<" "<<p1.second<<endl;
    //<string,int>
    pair<string,int>p2;
    p2.first="Tejas";
    p2.second=120;
    // cout<<p2.first<<" "<<p2.second<<endl;
    //<char,int>
    pair<string,int>p3;
    p3.first="Rahul";
    p3.second=195;
    // cout<<p3.first<<" "<<p3.second<<endl;

    // staring with map map me insertion deletion and serch O(1)
    // map is used where u have to store values like key and value pair 
    // map   m1[s[i]]++; it will increase count of s[i] key when same key ecounter
    unordered_map<string,int>m;
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    // Method 2 to deal with map
    m["vikash"]=643;
    m["vikky"]=1035;
    m["roshan"]=10465;
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl<<"size of map is:"<<m.size();

   m.erase("vikky");
   cout<<"\n after erase from map."<<endl;
    for(pair<string,int>p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    // for(auto p:m)
    // {
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    cout<<endl<<"size of map is:"<<m.size()<<endl;
    cout<<m["Raushan"];
    if(m.find("Raushan")!=m.end())
    {
        cout<<endl;
        cout<<"found and data is:"<<m["Raushan"];
    }
    else
    {
        cout<<endl;
        cout<<"not found! ";
    }
    cout<<" count is :"<<m.count("Raushan");
    
    return 0;
}
