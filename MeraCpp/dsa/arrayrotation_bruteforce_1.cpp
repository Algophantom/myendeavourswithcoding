#include<bits/stdc++.h>
using namespace std;
  
void rotate(vector<int>& nums, int k) {
    
    int l=nums.size();
    int r=k%l;
    vector <int> copy(r);
    for(int i=0;i<r;i++)
    {
        copy[i]=nums[i];
    }
    for(int i=r;i<l;i++)
    {
        nums[i-r]=nums[i];
    }
    int j=0;
    for(int i=r+2;i<l;i++)
    {
        nums[l-i]=copy[j];
        j++;
    }
        
    }
int main()
{
    vector <int> nums ={1,1,2,3,4,3,2,4};
    rotate(nums,3);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" , ";
    }
    
    return 0;
}