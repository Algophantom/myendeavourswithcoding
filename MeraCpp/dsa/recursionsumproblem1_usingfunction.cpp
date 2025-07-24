#include<bits/stdc++.h>
using namespace std;
int sum=0;
int sumof(int n)
{
    if(n==0) return 0;
    sum=n+sumof(n-1);
    return sum;

}

int main()
{
    int n;
   cin>>n;
   sum=sumof(n);
   cout<<sum;
   return 0;
}