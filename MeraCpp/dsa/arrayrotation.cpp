#include<bits/stdc++.h>
using namespace std;
 void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    vector<int> copy=nums;
    for(int i=0;i<n;i++)
    {
        nums[(i+k)%n]=copy[i];
    }
    }

int main()
{
    vector<int> nums={1,2,3,4,5,6,7};
    int k=3;
    rotate(nums,k);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}