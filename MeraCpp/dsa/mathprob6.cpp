#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    vector<int> divisors;
    int i=1;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0){
            divisors.push_back(i);
        }
    }
    for(int i=0;i<divisors.size();i++)
   {
    if(divisors[i]!=n&&divisors[i]!=1)
    {
        return false;
       
    }
    if(i==(divisors.size()-1))
    {
        return true;
        
    }
   }   
}

int main()
{
   int n;
   cin>>n;
   bool primestatus = prime(n);
   if(primestatus==true)
   {
    cout<<"True"<<endl;
   }
   else cout<<"False"<<endl;
    
}