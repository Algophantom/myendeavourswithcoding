#include<bits/stdc++.h>
using namespace std;
  
 int maxSubArray(vector<int>& nums) {
    /*
    Kadane's algorithm - O(N) TC
    O(1) SC
    Set sum to 0, maxsum to most negative integer
    if sum is less than 0, store the next number in the array
    else sum=sum+current value of the array

    then check which is maximum
    
    */
     int maxs = INT_MIN;
     int sum=0;
     for(int i=0; i<nums.size();i++)
     {
        
        if(sum<0)
        {
            sum =nums[i];
        }
        else sum = sum + nums[i];
        
        maxs = max(maxs,sum);
     }
     return maxs;
    }
int main()
{
    vector<int> nums ={-2,-1};
    int sum = maxSubArray(nums);
    cout<<sum;

    return 0;
}