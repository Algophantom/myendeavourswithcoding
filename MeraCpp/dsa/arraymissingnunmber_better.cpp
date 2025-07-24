#include<bits/stdc++.h>
using namespace std;
  
 int missingNumber(vector<int>& nums) {
      vector<int> hashVector(nums.size()+1,0);
      for(int i=0;i<nums.size();i++)
      {
        hashVector[nums[i]]=1;
      }
      for(int i=0;i<hashVector.size();i++)
      {
        if(hashVector[i]==0)return i;
      }

      return -1;
    
    }
        
int main()
{
    vector <int> nums ={0,1};
    int unique=missingNumber(nums);
    cout<<unique;
    return 0;
}