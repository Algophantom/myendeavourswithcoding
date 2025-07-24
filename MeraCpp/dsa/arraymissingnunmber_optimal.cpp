#include<bits/stdc++.h>
using namespace std;
  
 int missingNumber(vector<int>& nums) {
    int n=nums.size();
    int arrsum=0;
    int sum = (n*(n+1)/2);
    for (int i=0;i<n;i++)
    {
        arrsum+=nums[i];   
    }

    return sum-arrsum;
        
    }
int main()
{
    vector <int> nums ={0,1};
    int unique=missingNumber(nums);
    cout<<unique;
    return 0;
}