#include<bits/stdc++.h>
using namespace std;
  
 void sortColors(vector<int>& nums) {
   int count0=0;
   int count1=0;
   int count2=0;
   for(int i=0;i<nums.size();i++)
   {
    if(nums[i]==0)
    {
        count0++;
    }
    if(nums[i]==1)
    {
        count1++;
    }
    if(nums[i]==2)
    {
        count2++;
    }
   }     
    nums.clear();
   for(int i=0;i<(count0);i++)
   {
    nums.push_back(0);
   }
   for(int i=(count0);i<(count0+count1);i++)
   {
    nums.push_back(1);
   }
   for(int i=count0+count1;i<(count0+count1+count2);i++)
   {
    nums.push_back(2);
   }

for(int i=0; i<nums.size();i++)
{
    cout<<nums[i];
}
//cout<<"count0="<<count0<<" count1="<<count1<<" count2="<<count2;
        
    }
  
int main()
{
    vector<int>nums={2,0,2,1,1,0};
    sortColors(nums);
    return 0;
}