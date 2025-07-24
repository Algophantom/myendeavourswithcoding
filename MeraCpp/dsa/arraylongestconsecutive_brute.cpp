#include<bits/stdc++.h>
using namespace std;
  
int longestConsecutive(vector<int>& nums) {
    int count =1;
    int max1=1;
    for(int i=0;i<nums.size();i++)
    {
        int next = nums[i]+1;
        for(int j=0;j<nums.size();j++)
       { 
        auto it=find(nums.begin(),nums.end(),next);
        
        if(it !=nums.end())
        {
            count++;
            next++;
            max1=max(max1,count);
        }
        else 
        {
            count=0;
            break;
        }
        
       }

    
    }
    return max1;
}
int main()
{
    vector<int> test = {0,0};
    int con = longestConsecutive(test);
    cout<<con;
   

    return 0;
}