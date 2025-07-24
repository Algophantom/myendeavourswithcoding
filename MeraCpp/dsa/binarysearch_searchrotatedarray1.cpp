#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==target) return i;
    }
    return -1;
}

int main()
{
    vector <int> nums={7,8,9,1,2,3,4,5,6};
    int index=search(nums,5);
    cout<<index;
    return 0;
    
}