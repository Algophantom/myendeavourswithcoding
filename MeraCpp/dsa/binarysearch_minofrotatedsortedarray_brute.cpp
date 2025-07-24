#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& nums) {
    int low=0;
    int high=nums.size()-1;
    int minimum=INT_MAX;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(nums[low]<=nums[high])
        {
            minimum=min(nums[low],minimum);
        }
        if(nums[mid]>=nums[low])
        {

            minimum=min(minimum,nums[low]);
            low=mid+1;

        }
        else 
        {
            minimum=min(minimum,nums[mid]);
            high=mid-1;
        }
    }
    return minimum;
}
int main()
{
    vector <int> nums={2,1};
    int min=findMin(nums);
    cout<<min;
    return 0;
    
}