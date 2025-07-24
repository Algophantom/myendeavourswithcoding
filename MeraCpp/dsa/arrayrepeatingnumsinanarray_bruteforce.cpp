#include<bits/stdc++.h>
using namespace std;
  
int singleNumber(vector<int>& nums) {
    unordered_map<int,int> hashMap;
    for(int it:nums)
    {
        hashMap[it]++;
    }

    for(auto it=hashMap.begin();it!=hashMap.end();it++)
    {
        if(it->second==1) return it->first;
    }

    return 0;
    }
  
int main()
{
    vector<int>nums={4,1,2,1,2,3,4,3,5};
    int count=singleNumber(nums);
    cout<<count;
    return 0;
}