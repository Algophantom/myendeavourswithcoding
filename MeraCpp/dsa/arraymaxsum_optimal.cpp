#include<bits/stdc++.h>
using namespace std;
  

int subarraySum(vector<int>& nums, int k) {
  map <int,int> hashMap;
  hashMap[0]=1;
  int preSum = 0;
  int count = 0;
  for(int i=0;i<nums.size();i++)
  {
    preSum += nums[i];
    int remove = preSum - k;
    count = count + hashMap[remove];
    hashMap[preSum]++;
  }

  return count;

        
}

int main()
{
   vector<int> test = {1,-1,0};
   int count = subarraySum(test,0);
   cout<<count;
    return 0;
}