#include<bits/stdc++.h>
using namespace std;
  
 vector<int> findintersection(vector<int> &a, vector<int> &b) {
    unordered_set <int> c(a.begin(),a.end());
    unordered_set <int> intersection;
    for(int i=0;i<b.size();i++)
    {
        if(c.find(b[i])!=c.end())
        {
            intersection.insert(b[i]);
        }
    }

    return vector <int>(intersection.begin(),intersection.end());
    
        
    }
    
int main()
{
    vector <int> a={1,0,2,0,3};
    vector<int> b={1,2,3,4,3,5};
    vector <int>c=findintersection(a,b);
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }
   
   
    return 0;
}