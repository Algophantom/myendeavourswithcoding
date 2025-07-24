#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {

   int low=0;
   int high=nums.size()-1;
   
   while(low<=high)
   {
    int mid=(low+high)/2;
    if(nums[mid]==target) return mid;
    else if(nums[mid]>=nums[low])
    {
        if(nums[mid]>target&&nums[low]<=target)
        {
            high=mid-1;
        }
        else low=mid+1;
    }
    else 
    {
        if(nums[mid]<target&&nums[high]>=target)
        {
            low=mid+1;
        }
        else high=mid-1;
    }
    
   }
   return -1;
}

int main()
{
    vector <int> nums={7,8,9,1,2,3,4,5,6};
    int index=search(nums,2);
    cout<<index;
    return 0;
    
}