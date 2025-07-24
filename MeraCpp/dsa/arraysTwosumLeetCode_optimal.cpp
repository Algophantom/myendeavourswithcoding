#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target)
{
   unordered_map<int,int> hashMap;
   
   for(int i=0;i<nums.size();i++)
   {
    int a = nums[i];
   int left = target - a;
    if(hashMap.find(left)!=hashMap.end()) //map.find returns the iterator pointing to the key. when the value is not found, it point to map.end(). 
    //so if the said left over is not in the map, then the find will point to the end of the map. if it is in the map, it will not point to the end.
    {
        return{hashMap[left],i};
    }
    hashMap[a]=i;
   }

   return {-1,-1};
}
int main()
{
    
    int target;
    vector<int> nums={0,1,2,3,1,1,1};
    vector<int> indices;
    cin>>target;

    indices = twoSum(nums,target);
    for(int i=0;i<indices.size();i++)
    {
        cout<<indices[i]<<" ";
    }
    return 0;
}