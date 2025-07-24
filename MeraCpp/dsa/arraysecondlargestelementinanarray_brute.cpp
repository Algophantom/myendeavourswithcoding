#include<bits/stdc++.h>
using namespace std;
  
 int secondlargestelement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int l=nums.size();
    for(int i=l-1;i>0;i--)
    {
        if(nums[i]==nums[i-1]) nums.pop_back();
        else if(nums[i]!=nums[i-1]) return nums[i-1];
    }

    return -1;
     
    }
  
int main()
{
    vector<int>nums={10,10,10};
    int count=secondlargestelement(nums);
    cout<<count;
    return 0;
}