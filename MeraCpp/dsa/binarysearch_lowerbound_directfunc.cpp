#include<bits/stdc++.h>
using namespace std;

int findFloor(vector<int>& arr, int k) {

    int n=arr.size();
    auto lb = lower_bound(arr.begin(),arr.end(),k);
    return lb - arr.begin();
}
int main()
{
    vector <int> nums = {1 ,2, 8, 10, 11, 12, 19};
    int answer = findFloor(nums,0);
    cout<<answer;
    return 0;
}