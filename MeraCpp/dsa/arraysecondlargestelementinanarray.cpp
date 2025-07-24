#include<bits/stdc++.h>
using namespace std;
  
 int secondlargestelement(vector<int>& nums) {
    int largest = nums[0];
    int secondlargest = -1;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>largest)
        {
            secondlargest=largest;
            largest=nums[i];
        }
        else if(nums[i]!=largest&&nums[i]>secondlargest)
        {
            secondlargest=nums[i];

        }
    }

    return secondlargest;
     
    }

int secondsmallestelement(vector<int>& nums)
  {
    int smallest=nums[0];
    int secondsmallest=INT_MAX;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]<smallest){
            secondsmallest=smallest;
            smallest=nums[i];
        }
        else if(nums[i]!=smallest&&nums[i]<secondsmallest)
        {
            secondsmallest=nums[i];
        }
    }

    return secondsmallest; 
  }
int main()
{
    vector<int>nums={1,2,3,4,5,2,4,5};
    int l=secondlargestelement(nums);
    int s=secondsmallestelement(nums);
    cout<<"The second largest element is "<<l<<". The second smallest element is "<<s<<". ";
    return 0;
}