#include<bits/stdc++.h>
using namespace std;
  

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=nums[j];
            if(sum==k)
            {
                count ++;
                
            }
        }
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