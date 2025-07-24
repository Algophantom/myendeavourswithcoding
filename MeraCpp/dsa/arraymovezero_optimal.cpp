#include<bits/stdc++.h>
using namespace std;
  
void moveZeroes(vector<int>& nums) {
       int n = nums.size();
    int j = 0;  // Pointer to track the position of the next non-zero element
    
    // Step 1: Move all non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }
    
    // Step 2: Fill the remaining positions with zeros
    for (int i = j; i < n; i++) {
        nums[i] = 0;
    }
        
    }
    
int main()
{
    vector <int> nums ={1,0,2,0,3};
   moveZeroes(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" , ";
    }
    
    return 0;
}