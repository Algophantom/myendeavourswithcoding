#include<bits/stdc++.h>
using namespace std;
 void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    vector<int> copy;
    for(int j=0;j<k;j++)
    {
        copy=nums;
        for(int i=0;i<n;i++)
    {
        if(i==0) nums[0]=copy[n-1];
        else nums[i]=copy[i-1];    
    }

    }
    }

int main()
{
    vector<int> nums={-1,-100,3,99};
    int k=2;
    rotate(nums,k);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}