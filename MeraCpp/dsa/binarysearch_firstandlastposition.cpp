#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int>& nums, int target)
{
    int n=nums.size();
    int low=0;
    int high=n-1;
    int answer=n;
    while(high>=low)
    {
        int mid=(low+high)/2;
        if(nums[mid]>=target)
        {
            answer=mid;
            high=mid-1;
        }
        else low=mid+1;
        
    }

    return answer;
}

int upperbound(vector<int>& nums, int target)
{
    int n=nums.size();
    int low=0;
    int high=n-1;
    int answer=n;
    while(high>=low)
    {
        int mid=(low+high)/2;
        if(nums[mid]>target)
        {
            answer=mid;
            high=mid-1;
        }
        else low=mid+1;
        
    }

    return answer;
}

vector<int> searchRange(vector<int>& nums, int target)
{
    if (nums.empty()) return {-1,-1};
    int n=nums.size();
    int lb=lowerbound(nums,target);
    int up=upperbound(nums,target);
    if(lb==n||nums[lb]!=target) return {-1,-1};
    return {lb,up-1};
}

int main()
{
    vector <int> nums = {1};
    vector<int> search =searchRange(nums,1);
    for(int i=0;i<search.size();i++)
    {
        cout<<search[i]<<" ";
    }
    return 0;
}