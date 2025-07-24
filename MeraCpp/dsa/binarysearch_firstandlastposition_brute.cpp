#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=-1;
        int last = -1;
       
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                if(first==-1) first=i;
                last=i;
            }
        }
        
        return {first,last};
        
}
int main()
{
    vector <int> nums = {5,7,7,8,8,10};
    vector<int> rangeindex(2,0);
    rangeindex=searchRange(nums,0);
    for(int i=0;i<rangeindex.size();i++)
    {
        cout<<rangeindex[i]<<" ";
    }
    return 0;
}