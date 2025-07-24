#include<bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int c=0;
    while(n>0)
    {
        n=n/10;
        c++;
    }

    return c;
}
int countDigits2(int n)
{
    if (n==0) return 1;
    return floor(log10(n)+1);
}
int main()
{
   int n=0;
   cin>>n;
   int count=countDigits2(n);
   cout<<count;
return 0;
    
}