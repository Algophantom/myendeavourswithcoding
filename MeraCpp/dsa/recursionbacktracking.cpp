#include<bits/stdc++.h>
using namespace std;

void printname(int i,int n)
{
    if(i>n) return;
    
    printname(i+1,n);//cout comes after function call, so the first function that gets executed is f(3,3), then f(2,3), then f(1,3)
    cout<<i<<endl;
}
void printnameback(int i,int n)
{
    if(i==0) return;
    printnameback(i-1,n);//cout comes after function call, so the first function that gets executed is f(1,3), then f(2,3), then f(3,3)
    cout<<i<<endl;
}

int main()
{
    int n;
   cin>>n;
   printname(1,n);
   return 0;
}