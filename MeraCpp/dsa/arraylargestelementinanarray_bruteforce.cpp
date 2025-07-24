#include<bits/stdc++.h>
using namespace std;
  
 int largestelement(vector<int>& nums) {
    sort(nums.begin(),nums.end());

    return nums.back();
     
    }
  
int main()
{
    vector<int>nums={222,23,121,231,321,25,5};
    int count=largestelement(nums);
    cout<<count;
    return 0;
}