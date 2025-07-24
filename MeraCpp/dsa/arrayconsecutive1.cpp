#include<bits/stdc++.h>
using namespace std;
  
 int findMaxConsecutiveOnes(vector<int>& nums) {
    int count=0;
    int l=nums.size();
    vector <int> count1={0};
    for(int i=0;i<l;i++)
    {
        if(nums[i]==1){
            count++;
            if((i+1)!=l&& nums[i+1]!=1)
            {
                count1.push_back(count);
                count=0;
            }
            if(i==(l-1)){count1.push_back(count);}
        }
    }

    sort(count1.begin(),count1.end());
    return count1.back();
    }
  
int main()
{
    vector<int>nums={1,1,0,1};
    int count=findMaxConsecutiveOnes(nums);
    cout<<count;
    return 0;
}