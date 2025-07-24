#include<bits/stdc++.h>
using namespace std;
  
 void sortColors(vector<int>& nums) {
    int l=nums.size();
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l-i-1;j++)
        {
            if(nums[j]>nums[j+1]) swap(nums[j],nums[j+1]);
        }
    }     
        
    }
  
int main()
{
    vector<int>nums={2,0,2,1,1,0};
    sortColors(nums);
    return 0;
}