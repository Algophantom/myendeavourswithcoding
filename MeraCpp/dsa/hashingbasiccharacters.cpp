#include<bits/stdc++.h>
using namespace std;


int main()
{
    char n;
    cin>>n;
    string s = "!isnasbh399askjfn0i1209fnawer-0123";
    int hashh[256]={0};
    for(int i=0;i<s.size();i++)
    {
        hashh[s[i]]++;
    }

   
    cout<<hashh[n];
   return 0;
    
}