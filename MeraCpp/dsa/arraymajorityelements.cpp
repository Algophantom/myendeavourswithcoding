#include<bits/stdc++.h>
using namespace std;
  
 int majorityElement(vector<int>& nums) {
     unordered_map<int,int> hashMap;
     int l=nums.size();

     for(auto it: nums)
     {
        hashMap[it]++;
     }   
     for(auto it=hashMap.begin();it!=hashMap.end();it++)
     {
        if(it->second >l/2) return it->first;
     }

     return 0;
    }
  
int main()
{
    vector<int>nums={2,2,1,1,1,2,2};
    int count=majorityElement(nums);
    cout<<count;
    return 0;
}