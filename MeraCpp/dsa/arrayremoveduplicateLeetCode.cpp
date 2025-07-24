#include<bits/stdc++.h>
using namespace std;


 int removeDuplicates(vector<int>& nums)
{
    int i=0;
   while(i<nums.size()-1)
   {
    if(nums[i]==nums[i+1]){
        nums.erase(nums.begin()+i);
    }
    else i++;
   }
   return nums.size();

}
int main()
{
    vector<int> nums={1,1,2,2};
   int j=removeDuplicates(nums);
   cout<<j<<endl;
   for(int i=0;i<nums.size();i++)
   {
    cout<<nums[i]<<endl;
   }


    
}