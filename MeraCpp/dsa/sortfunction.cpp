#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2)
{
    if(p1.second<p2.second)
    {
        return true;
    }
   if (p1.second>p2.second)
    {
        return false;
    }

  

    return p1.first>p2.first;
}
int main()
{
   int ar[3]={1,2,3};
    pair <int,int> ar1[4]={{1,7},{2,7},{2,4}};//sorts based on first element, if first element are the same, then the second element is considered.
    sort(ar1,ar1+3,comp);
    for(int i=0;i<3;i++)
    {
        cout<<ar1[i].first<<" "<<ar1[i].second<<endl;
    }

    
    
}