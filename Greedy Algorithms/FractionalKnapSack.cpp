#include <bits/stdc++.h>
using namespace std;
double fractionalKnapsack(vector<pair<pair<int, int>, double>> p, int capacity)
{
    double profit = 0;
    for (auto p:p)
    {
        if (capacity <= 0)
            return profit;

        if (capacity >=p.first.second)
        {
            profit +=p.first.first;
            capacity -=p.first.second;
        }
        else
        {
            profit += ((double)capacity / p.first.second) * p.first.first;
            capacity = 0;
        }
    }
    return profit;
}
bool cmd(pair<pair<int, int>, double> p1, pair<pair<int, int>, double> p2)
{
    return p1.second > p2.second;
}
int main()
{
    vector<int> val = {8, 2, 10, 1, 9, 7, 2, 6, 4, 9};
    vector<int> wt = {10, 1, 7, 7, 5, 1, 8, 6, 8, 7};
    int capacity=21;
    vector<double> proPerWei;
    for (int i = 0; i < val.size(); i++)
    {
        proPerWei.push_back((double)val[i] / wt[i]);
    }
    vector<pair<pair<int, int>, double>> p;
    for (int i = 0; i < val.size(); i++)
    {
        p.push_back({{val[i], wt[i]}, proPerWei[i]});
    }
    sort(p.begin(), p.end(), cmd);
    cout<<"profit is:"<<endl;
    cout<<fractionalKnapsack(p,capacity);
    return 0;
}

// double fractionalKnapsack(vector<pair<pair<int, int>, double>> p, int capacity)
//     {
//         double profit = 0;
//         for (auto it:p)
//         {
//             if (capacity <= 0)
//                 return profit;
//             if (capacity >=it.first.second)
//             {
//                 profit +=it.first.first;
//                 capacity -=it.first.second;
//             }
//             else
//             {
//                 profit += ((double)capacity / it.first.second) * it.first.first;
//                 capacity = 0;
//             }
//         }
//         return profit;
//     }
    

//     double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) 
//     {
//         vector<double> proPerWei;
//     for (int i = 0; i < val.size(); i++)
//     {
//         proPerWei.push_back((double)val[i] / wt[i]);
//     }
//     vector<pair<pair<int, int>, double>> p;
//     for (int i = 0; i < val.size(); i++)
//     {
//         p.push_back({{val[i], wt[i]}, proPerWei[i]});
//     }
//     sort(p.begin(), p.end(), [](pair<pair<int, int>, double> p1, pair<pair<int, int>, double> p2)
//     {
//         return p1.second > p2.second;
//     });
//       return fractionalKnapsack(p,capacity);
//     }