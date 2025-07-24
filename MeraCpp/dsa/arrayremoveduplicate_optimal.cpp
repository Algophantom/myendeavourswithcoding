#include<bits/stdc++.h>
using namespace std;
  
int removeDuplicates(vector<int>& nums)
{
    vector <int> copy=nums;
    int l=nums.size();
    int index=0;
    for(int i=0;i<l-1;i++)
    {
        if(copy[i]!=copy[i+1]){
            nums[index+1]=copy[i+1];
            index++;
        } 
        

    }
    
    return index+1;
}
int main()
{
    vector <int> nums ={1,1,2};
    int unique=removeDuplicates(nums);
    cout<<unique;
    return 0;
}