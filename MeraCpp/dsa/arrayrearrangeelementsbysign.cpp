#include<bits/stdc++.h>
using namespace std;
  
 vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                neg.push_back(nums[i]);
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        int j=0;
        for(int i=0;i<(nums.size()&&j<neg.size();i++)
        {
            
            if(nums[i]>0)
            {
                nums.emplace(nums.begin()+i+1,neg[j]);
                i++;
                j++;
            }
        }

        return nums;
    }
    
int main()
{
    vector<int> nums ={3,-15,-45,-38,2,-34,-16,3,47,41,46,-10,48,-13,43,-40};
    vector<int> rarr = rearrangeArray(nums);
   
   for(int i=0;i<rarr.size();i++)
   {
    cout<<rarr[i]<<" ";
   }

    return 0;
}