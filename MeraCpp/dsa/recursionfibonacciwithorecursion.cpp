#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target)
{
    int l=nums.size();
    int sum=0;
    vector<int> indices;    
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            sum=nums[i]+nums[j];
            if(sum==target&&i!=j){
                indices.push_back(i);
                indices.push_back(j);
                break;
            }
            else {
                sum=0;
            }
        }

        
    }
    int k=indices.size();
    for(int a=0;a<indices.size();a++)
        {for(int b=a+1;b<indices.size();b++)
            if(indices[a]==indices[b]&&a!=b){
                indices.erase(indices.begin()+b);
                b--;
            }
        }

    return indices;
}
int main()
{
    
    int target;
    vector<int> nums={3,2,4};
    vector<int> indices;
    cin>>target;

    indices = twoSum(nums,target);
    for(int i=0;i<indices.size();i++)
    {
        cout<<indices[i]<<" ";
    }
    return 0;
}