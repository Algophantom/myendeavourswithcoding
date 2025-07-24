#include<bits/stdc++.h>
using namespace std;
  
void moveZeroes(vector<int>& nums) {
        int count=0;
        vector <int> temp;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                temp.push_back(nums[i]);
            }
        }
        for(int i=0;i<temp.size();i++)
        {
            nums[i]=temp[i];
        }
        for(int i=temp.size();i<nums.size();i++)
        {
            nums[i]=0;
        }
        
    }
    
int main()
{
    vector <int> nums ={1,2,3,0,0,2,3};
   moveZeroes(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" , ";
    }
    
    return 0;
}