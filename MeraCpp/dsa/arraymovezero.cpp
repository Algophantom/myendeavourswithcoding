#include<bits/stdc++.h>
using namespace std;
  
 int missingNumber(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int last=nums.back();
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=i){
            return i;
        }
        count++;
        
        
    }
    if(count==nums.size()) return nums.size();
    return 0;
    }
  
int main()
{
    vector<int>nums={0,1};
    int count=missingNumber(nums);
    cout<<count;
    return 0;
}