#include<bits/stdc++.h>
using namespace std;

void facof(int n,int factorial)
{
    if (n==0){ cout<<1<<endl;
                    }
    if(n<=1) {
        cout<<factorial;
        return ;}
    facof(n-1,factorial*n);
    

}

int main()
{
    int n;
   cin>>n;
   facof(n,1);
   return 0;
}