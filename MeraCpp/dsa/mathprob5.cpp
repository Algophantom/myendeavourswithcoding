#include<bits/stdc++.h>
using namespace std;

vector<int> printDivisor(int n)
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

int main()
{
   int n;
   cin>>n;
   vector<int>divisors = printDivisor(n);

   for(int i=0;i<divisors.size();i++)
   {
    cout<<divisors[i];
    if(i<(divisors.size()-1))
    {
        cout<<",";
    }
   }
   
   
   
return 0;
    
}