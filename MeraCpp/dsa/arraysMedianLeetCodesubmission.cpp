#include<bits/stdc++.h>
#include <iostream>
using namespace std;


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{

    vector<int> sorted=nums1;
    int l=nums1.size()+nums2.size();
    for(auto it=nums2.begin();it!=nums2.end();++it)
    {
        sorted.push_back(*it);
        
    }
    sort(sorted.begin(),sorted.end());
    int k=sorted.size();
    if((k%2)==0){
        return (static_cast<double>(sorted[(k/2)-1])+static_cast<double>(sorted[(k/2)]))/2;
    }
    else return static_cast<double>(sorted[k / 2]);

}
int main()
{

    vector<int> nums1={1,2};
    vector<int> nums2={3,4};    
    double median = findMedianSortedArrays(nums1,nums2);
    cout<<median;
    return 0;
}