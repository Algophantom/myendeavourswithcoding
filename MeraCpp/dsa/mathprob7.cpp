#include<bits/stdc++.h>
using namespace std;

vector<int> findDivisor(int n)
{
    vector<int> divisors;
    int i=1;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0){
            divisors.push_back(i);
            if(n/i!=i){
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(),divisors.end());

    return divisors;
}

int gcd(int a,int b)
{
    vector<int>divisors = findDivisor(a);
   vector<int>divisorsm=findDivisor(b);
   vector<int>common;

   for(int i=0;i<divisors.size();i++)
   {
    for(int j=0;j<divisorsm.size();j++)
    {
        if(divisors[i]==divisorsm[j])
        {
            common.push_back(divisors[i]);
        }

    }
   }

   sort(common.begin(),common.end());

   int c = *((common.end())-1);
   return c;

}
int main()
{
   int n,m;
   cout<<"Enter the numbers";
   cin>>n>>m;

   int h=gcd(n,m);
   cout<<h;
   

   
   
   
return 0;
    
}