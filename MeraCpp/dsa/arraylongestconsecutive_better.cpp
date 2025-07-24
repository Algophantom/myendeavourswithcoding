#include<bits/stdc++.h>
using namespace std;
  
int longestConsecutive(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    
    int count= 1;
    int lastsmaller = INT_MIN;
    int max1=1;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]-1==lastsmaller)
        {
            count++;
            lastsmaller=nums[i];
            max1=max(count,max1);
        }
        else if (nums[i]!=lastsmaller)
        {
            count=1;
            lastsmaller=nums[i];
        }

    }
    return max1;
}
int main()
{
    vector<int> test = {0,3,7,2,5,8,4,6,0,1};
    int con = longestConsecutive(test);
    cout<<con;
   

    return 0;
}