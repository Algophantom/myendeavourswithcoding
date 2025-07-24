#include<bits/stdc++.h>
using namespace std;
  bool check(vector<int>& nums) {
    int n=nums.size();
    vector <int> copy=nums;
    vector <int> sorty=nums;
    sort(sorty.begin(),sorty.end());
    if(nums==sorty) return true;
    for(int j=1;j<n;j++)
    {
        for(int i=0;i<n;i++)
    {
        nums[(i+j)%n]=copy[i];
    }
    if(nums==sorty)
    {
        return true;
    }    
    }
    return false;
    
  }
int main()
{
    vector<int> nums={1,2,3};
    bool check1= check(nums);
    cout<<check1;
    return 0;
}