#include<bits/stdc++.h>
using namespace std;
  
 vector<int> findUnion(vector<int> &a, vector<int> &b) {
    map <int,int> hashMap;
    vector <int> c;
    for(int i=0;i<a.size();i++)
    {
        hashMap[a[i]]++;
    }
    for(int i=0;i<b.size();i++)
    {
        hashMap[b[i]]++;
    }
    int i=0;
    for(auto it: hashMap)
    {
        c.push_back(it.first);
    }

    return c;
        
    }
    
int main()
{
    vector <int> a={1,0,2,0,3};
    vector<int> b={1,2,3,4,5};
    vector <int>c=findUnion(a,b);
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }
   
   
    return 0;
}