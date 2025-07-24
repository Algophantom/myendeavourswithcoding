#include<bits/stdc++.h>
using namespace std;


int* reversearray(int arr[],int i)
{
    int reverse[i];
    for(int j=0;j<i;j++)
    {
        reverse[i-j-1]= arr[j];
    }
    return &reverse;

}
int main()
{
    int arr[5]={1,2,3,4,5};
    
    int rev[] = reversearray(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}