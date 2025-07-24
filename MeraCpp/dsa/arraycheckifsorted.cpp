#include<bits/stdc++.h>
using namespace std;
  bool check(vector<int>& nums) {
    int n = nums.size();
    int drops = 0; // Count the number of "drops" in the array

    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) { // Compare current with the next (circularly)
            drops++;
        }
        if (drops > 1) { // Early exit if more than one drop
            return false;
        }
    }

    return true; // Valid if drops are 0 or 1
}
    
  
int main()
{
    vector<int> nums={1,2,3};
    bool check1= check(nums);
    cout<<check1;
    return 0;
}