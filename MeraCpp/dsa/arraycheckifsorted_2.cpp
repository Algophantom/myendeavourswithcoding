#include<bits/stdc++.h>
using namespace std;
  
bool check(vector<int>& nums) {
    int l=nums.size();
    for(int i=0;i<(l-1);i++)
    {
        if(nums[i]>nums[i+1]) return false;
    }

    return true;
   
  }
int main()
{
    vector <int> nums ={1,3,2,3};
    bool truth=check(nums);
    cout<<truth;
    return 0;
}