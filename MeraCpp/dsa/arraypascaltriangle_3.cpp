#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    vector<int> majority;
    int count=1;
    int max1=1;
    int n=nums.size();
    int l=n/3;
    sort(nums.begin(),nums.end());
    int j=0;
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]==nums[i-1])
        {
            count++;
            if(count>l) 
            {
                if(majority.empty() || majority.back() != nums[i])
                {
                    majority.push_back(nums[i]);
                    max1=max(max1,count);
                }
            }
        }
        else count=1;
    }
    
    return majority;
}

int main()
{
    vector <int> input = {1};
    vector <int> majority = majorityElement(input);

    for(int i=0;i<majority.size();i++)
    {
        cout<<majority[i]<<" ";
    }
   
   
    return 0;
}