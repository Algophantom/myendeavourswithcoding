#include<bits/stdc++.h>
using namespace std;

long long facof(int n)
{
    if (n==0){ return 1;}
        return (long long)n * facof(n-1);
        

}

int main()
{
    int n;
   cin>>n;
   long long fac = facof(n);
   cout<<fac;
   return 0;
}