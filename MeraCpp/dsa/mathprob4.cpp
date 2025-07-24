#include<bits/stdc++.h>
using namespace std;
int countdigits(int n)
{
    if(n==0)return n+1;
    else return floor(log10(n)+1);
}
bool Armstrong(int n)
{   
   
   int og=n;
   int lastdigit=0;
   int i=countdigits(n);
   int sum=0;
   
   while(n>0)
   {
    lastdigit=n%10;
    sum=sum+pow(lastdigit,i);
    n=n/10;
   }
   

   if(sum==og) return true;
   else return false;

}
int main()
{
   int n;
   cin>>n;
   bool arm=Armstrong(n);
   
   
return 0;
    
}