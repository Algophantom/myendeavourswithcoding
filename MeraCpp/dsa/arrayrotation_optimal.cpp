#include<bits/stdc++.h>
using namespace std;
  
void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    if(n<=1) return;
    k=k%n;
    
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
        
    }
int main()
{
    vector <int> nums ={-1};
    rotate(nums,2);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" , ";
    }
    
    return 0;
}