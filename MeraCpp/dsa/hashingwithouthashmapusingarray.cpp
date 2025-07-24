#include<bits/stdc++.h>
using namespace std;


int noofelementsinarray(vector <int> arr,int n)
{
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==n) count++;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr = {1,2,3,2,2,1};
    int j=noofelementsinarray(arr,n);
    cout<<j;
   return 0;
    
}