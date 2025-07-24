#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {

    int n=nums.size();
    int low =0; int high = n-1;
    int mid=0;
    for(int i=0;i<n;i++)
    {   
        mid = (high + low)/2;
        if(nums[mid]==target) return mid;
        else if(target > nums[mid]) low= mid+1;
        else high = mid -1;
    }
    return -1;
}

int main()
{
    vector <int> nums = {-1,0,3,5,9,12};
    int index = search(nums,9);
    cout<<index;
    return 0;
}