#include<bits/stdc++.h>
using namespace std;

int searchr(vector<int>& nums,int low, int high, int target)
{
    if(high<low) return -1;
    int mid=(low+high)/2;
    
    if(nums[mid]==target) return mid;
    else if(nums[mid]<target) return searchr(nums,mid+1,high,target);

    return searchr(nums,low,mid-1,target);

}
int search(vector<int>& nums, int target) {

    return searchr(nums,0,nums.size()-1,target);
}

int main()
{
    vector <int> nums = {-1,0,3,5,9,12};
    int index = search(nums,9);
    cout<<index;
    return 0;
}