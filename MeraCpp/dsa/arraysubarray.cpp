#include<bits/stdc++.h>
using namespace std;
  
 int maxSubArray(vector<int>& nums) {
       int max1 =INT_MIN; //TC = O(N2), SC=O(1)// THIS IS THE BETTER APPROACH
        for(int i=0;i<nums.size();i++)
        {
           
            int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum=sum+nums[j];
                max1=max(sum,max1);
            }
        }
        return max1;
    }
int main()
{
    vector<int> nums ={-2,-1};
    int sum = maxSubArray(nums);
    cout<<sum;

    return 0;
}