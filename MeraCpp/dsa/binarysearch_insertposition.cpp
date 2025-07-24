#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int low = 0;
        int high = n-1;
        int mid =0;
        while(high >= low)
        {
            mid =(low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else low = mid+1;
        }
        return low;//correct position for insertion
}

int main()
{
    vector <int> nums = {1,3,5,6};
    int answer = searchInsert(nums,7);
    cout<<answer;
    return 0;
}