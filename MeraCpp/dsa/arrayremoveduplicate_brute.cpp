#include<bits/stdc++.h>
using namespace std;
  
int removeDuplicates(vector<int>& nums)
{
    set <int> st;
    for(int i=0;i<nums.size();i++)
    {
        st.insert(nums[i]);
    }

    int index=0;
    for(auto it:st)
    {
        nums[index]=it;
        index++;
    }
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return index;

}
int main()
{
    vector <int> nums ={1,3,2,3,4,3,3,4};
    int unique=removeDuplicates(nums);
    cout<<unique;
    return 0;
}