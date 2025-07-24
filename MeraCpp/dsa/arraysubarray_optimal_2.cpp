#include<bits/stdc++.h>
using namespace std;
  
 pair <int,int> maxSubArray(vector<int>& nums) {
    /*
    Kadane's algorithm - O(N) TC
    O(1) SC
    Set sum to 0, maxsum to most negative integer
    if sum is less than 0, store the next number in the array
    else sum=sum+current value of the array

    then check which is maximum

    to find the indices, set start,beststart and end. beststart and end will be updated in the max loop.
    
    */
     int maxs = INT_MIN;
     int sum=0;
     int start =-1;
     int beststart =-1;
     int end =-1;
     for(int i=0; i<nums.size();i++)
     {
        
        if(sum<0)
        {
            sum =nums[i];
            start = i;
        }
        else sum = sum + nums[i];
            
        if(sum>maxs)
        {
            maxs=sum;
            beststart = start;
            end=i;
        }

     }
     return {beststart,end};
    }
int main()
{
    vector<int> nums ={-2,1,-3,4,-1,2,1,-5,4};
    pair<int,int> indices = maxSubArray(nums);
    cout<<indices.first<<" , "<<indices.second;

    return 0;
}