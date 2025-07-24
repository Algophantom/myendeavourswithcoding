#include<bits/stdc++.h>
using namespace std;

void sumof(int n,int sum)
{
    if(n<1) {
        cout<<sum;
        return ;}
    
    sumof(n-1,sum+n);

}

int main()
{
    int n;
   cin>>n;
   sumof(n,0);
   return 0;
}