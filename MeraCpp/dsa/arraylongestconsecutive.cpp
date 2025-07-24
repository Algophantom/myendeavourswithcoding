#include<bits/stdc++.h>
using namespace std;
  
int longestConsecutive(vector<int>& nums) {
    if(nums.empty()) return 0;
    map<int,int> hashMap;
    for(int i=0;i<nums.size();i++)
    {
        hashMap[nums[i]]++;
    }
    if (hashMap.size()==1) return 1;
    int count=1;
    int max1=1;
    auto previt=hashMap.begin();
    
    for(auto it=hashMap.begin();it!=hashMap.end();it++)
    {
      
        if(it->first==(previt->first)+1)
        {
            count++;
            max1=max(max1,count);
        }
        else count=1;

        previt=it;

    }

    return max1;

}
int main()
{
    vector<int> test = {0,3,7,2,5,8,4,6,0,1};
    int con = longestConsecutive(test);
    cout<<con;
   

    return 0;
}