#include<bits/stdc++.h>
using namespace std;

int findFloor(vector<int>& arr, int k) {

    int n=arr.size();
    int low=0;//low pointer
    int high = n-1;//high pointer
    int mid = 0;
    int answer =-1;//default answer in case of no answer
    while(high>=low)//case to break the search
    {
        mid =(high+low)/2;//find mid index
        if(arr[mid]>=k) //if the element at mid is greater than or equal to the target, it can be a potential answer,
        {
            answer = mid;//so answer is updated.
            high=mid-1;//high is updated as it is pointless to search the lowest index beyond the updated answer
        }
        else low=mid+1;//if arr[mid] is lesser than target, then no point searching for indices below that
        //do not update the answer, shift the low and recalculate the mid pointer
        
        
    }
    
    return answer;//this will point to the largest element in arr[] that is less than or equal to k

    //TC=O(LOGN) - LOG 2 OF N
}
int main()
{
    vector <int> nums = {1 ,2, 8, 10, 11, 12, 19};
    int answer = findFloor(nums,0);
    cout<<answer;
    return 0;
}