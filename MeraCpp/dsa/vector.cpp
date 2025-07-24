#include<bits/stdc++.h>
using namespace std;

int explainVector()
{
    vector<int> ar;
    ar.push_back(1);
    ar.push_back(2);
    ar.push_back(3);
    ar.push_back(4);
    ar.push_back(9);
    

    vector <pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    //cout<<vec[0].first;

    vector<int>::iterator it=ar.end();
    cout<<*(it)<<endl;
    it--;
    cout<<*(it)<<endl;
    cout<<vec.back().second;

    for(auto it=ar.begin();it!=ar.end();it++)
    {
        cout<<*(it)<<" ";
    }

    cout<<endl;

   vector<int> ap={1,2,0};

   ar.erase(ar.begin()+1,ar.begin()+3);//start point and after the end point
   ar.insert(ar.begin(),2);
   ar.insert(ar.begin()+1,2,50);
   
   ar.pop_back();
   ar.swap(ap);

 for(auto it : ar)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<ar.size()<<endl;
    cout<<ar.empty()<<endl;

    return ar.empty();

}
int main()
{
    int a = explainVector();
    if (a==0) 
    {cout<<"The vector is not empty";}
    else {cout<<"The vector is empty";}
   
    return 0;

}