#include<bits/stdc++.h>
using namespace std;
  
 int largestelement(vector<int>& nums) {
    int largest=nums[0];
    for(int i=0;i<nums.size();i++)
    {
        largest=max(largest,nums[i]);
    }

    return largest;
     
    }
  
int main()
{
    vector<int>nums={-222,-23,-121,-231,-321,-25,-5};
    int count=largestelement(nums);
    cout<<count;
    return 0;
}