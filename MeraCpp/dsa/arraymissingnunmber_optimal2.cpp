#include<bits/stdc++.h>
using namespace std;
  
 int missingNumber(vector<int>& nums) {
      int n=nums.size();
      int xor1=0;
      int xor2=0;
      for(int i=1;i<=n;i++)
      {
        xor1=xor1^i;
      }
      for(int i=0;i<n;i++)
      {
        xor2=xor2^nums[i];
      }
      return xor1^xor2;
    
    }

    //TC=O(N)
    //SC=O(1)
        
int main()
{
    vector <int> nums ={0,1};
    int unique=missingNumber(nums);
    cout<<unique;
    return 0;
}