#include <iostream>
// include set
#include <unordered_set>
using namespace std;
int main()
{
    // like vetcor => vector<int>v;
    // like stack=>stack<int>s;
    // like queue<int>q;
    // same as these we write unordered_set
    unordered_set<int> s;
    // inseting values into unordered_set
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    // set me unique ele hi store hoti hai
    s.insert(1); // it will not store again in the set
    // output:5 1 2 3 4
    s.insert(5);
    // Traversing over set using {foreach} loop
    // Note:set does not have any index , top,bottom,fornt,back it prints in random order
    for (auto ele : s)
    {
        cout << ele << " ";
    }
    //  printing size of set
    cout << "\n"
         << "printing size of set:" << s.size() << endl;
    cout << "erase or delete an ele form the set:" << s.erase(3) << endl;
    for (int ele : s)
    {
        cout << ele << " ";
    }
    cout << "\n"
         << "printing size of set:" << s.size() << endl;
    // finding an element of set
    int target = 4;
    if (s.find(target) != s.end()) // s.find(target)=>it finds ele in the set and if ele is not found in the
    {                              // set then it return s.end() which is iterator next to the last value in the set.
        cout << "ele exists" << endl;
    }
    else
    {
        cout << "Does not exists" << endl;
    }
    return 0;
}