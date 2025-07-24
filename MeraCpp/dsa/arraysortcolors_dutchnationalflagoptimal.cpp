#include<bits/stdc++.h>
using namespace std;
  
 void sortColors(vector<int>& nums) {
  int low=0;
  int mid=0;
  int high=(nums.size())-1;
  while(high>=mid)
  {
    if(nums[mid]==0)
    {
        swap(nums[mid],nums[low]);
        low++;
        mid++;
    }
    else if(nums[mid]==1)
    {
        mid++;
    }
    else if(nums[mid]==2)
    {
        swap(nums[mid],nums[high]);
        high--;
    }

  }
for(int i=0; i<nums.size();i++)
{
    cout<<nums[i]<<" ";
}
//cout<<"count0="<<count0<<" count1="<<count1<<" count2="<<count2;
        
    }
  
int main()
{
    vector<int>nums={1,2,0,2,0,2,1};
    sortColors(nums);
    return 0;
}