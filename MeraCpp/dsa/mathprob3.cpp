#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{   
   int rev=0;
   int og=n;
   int lastdigit=0;
   while(n>0)
   {
    lastdigit=n%10;
    rev=(rev*10)+lastdigit;
    n=n/10;
   }
   if(rev==og) return true;
   else return false;

}
int main()
{
   int n;
   cin>>n;
   bool palindromey=palindrome(n);
   cout<<palindromey;
   
return 0;
    
}