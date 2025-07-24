#include<bits/stdc++.h>
using namespace std;

   
    int reverse(int x) {
        int rev=0;
        int lastdigit=0;
        int n=0;
        if (x <= INT_MIN || x >= INT_MAX) {
        return 0;
    }
        n=abs(x);
        while(n>0)
        {
            lastdigit=n%10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && lastdigit > 7)) 
            {return 0;}
            rev=(rev*10)+lastdigit;
            n=n/10;
        }
        if(x<0){
      rev=(-1)*rev;
   }
        return rev;
    }

int main()
{
   int n;
   cin>>n;
   int rev=reverse(n);
   cout<<rev;
return 0;
    
}