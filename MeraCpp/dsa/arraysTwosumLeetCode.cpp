#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target)
{
    int l=nums.size();
    int sum=0;
    vector<int> indices;    
    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            
            if(nums[i]+nums[j]==target){
                return {i,j}; //exactly one solution
            }
        }

        
    }
    return indices;
}
int main()
{
    
    int target;
    vector<int> nums={0,1,2,3,1,1,1};
    vector<int> indices;
    cin>>target;

    indices = twoSum(nums,target);
    for(int i=0;i<indices.size();i++)
    {
        cout<<indices[i]<<" ";
    }
    return 0;
}