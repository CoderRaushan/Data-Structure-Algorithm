#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    //we wil do it later when all sorting algo is revised!
    // int arr[]={ 8,7, 1, 6, 5, 9};
    vector<int>v={ 4, 2, 8, 6, 15, 5, 9, 20};
    vector<int>result;
    sort(v.begin(),v.end());
    int n=v.size();
    for(int i=0;i<n/2;i++)
    {
        result.push_back(v[i]);
    }
    for(int i=n-1;i>=n/2;i--)
    {
        result.push_back(v[i]);
    }
    for(auto ele:result)
    {
        cout<<ele<<endl;
    }
    return 0;
    //Time com=O()
    //sapce= space con=
}
