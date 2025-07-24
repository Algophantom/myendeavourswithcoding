#include<bits/stdc++.h>
using namespace std;
  
 bool searchInSorted(vector<int>& arr, int k) {
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==k) return true;
    }

    return false;
       
        
    }
    
int main()
{
    vector <int> nums ={1,0,2,0,3};
   bool truth= searchInSorted(nums,9);
   
    cout<<truth;
    return 0;
}