#include<bits/stdc++.h>
using namespace std;
bool search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) return true;

       
        if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
            
                low++;
                high--;
            
        }
        
        else if (nums[low] <= nums[mid]) {
            if (target >= nums[low] && target < nums[mid]) {
                high = mid - 1;  
            } else {
                low = mid + 1;   
            }
        } 
       
        else {
            if (target > nums[mid] && target <= nums[high]) {
                low = mid + 1;  
            } else {
                high = mid - 1; 
            }
        }
    }
    return false;
}


int main()
{
    vector <int> nums={1,0,1,1,1};
    bool index=search(nums,0);
    cout<<index;
    return 0;
    
}