#include<bits/stdc++.h>
using namespace std;

void addd(int arr[][100],int n, int m)
{
    for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        arr[i][j]+=12;
    }
    cout<<"The value in the addd function is"<<arr[1][2];
  }
}

int main()
{
    int n,m;
    cin>>n>>m;
  int arr[100][100];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }

    
  }
addd(arr,n,m);
cout<<"The value of the main array= "<<arr[1][2];
return 0;
}