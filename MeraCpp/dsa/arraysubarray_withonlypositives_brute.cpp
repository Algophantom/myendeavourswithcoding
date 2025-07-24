#include<bits/stdc++.h>
using namespace std;
  
 int longestSubarray(vector<int>& nums, int k) {
    
    int maxcount=0;
    for(int i=0;i<nums.size();i++)
    {
        int sum=0;
        for(int j=(i);j<nums.size();j++)
        {
            sum+=nums[j];
            if(sum==k) {maxcount=max(maxcount,j-i+1);
                    break; }
        }
        
    }
    return maxcount;
        
    }
        
int main()
{
    vector <int> nums ={1,2,3,4};
    int unique=longestSubarray(nums,6);
    cout<<unique;
    return 0;
}