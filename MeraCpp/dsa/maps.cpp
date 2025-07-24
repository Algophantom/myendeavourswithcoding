#include<bits/stdc++.h>
using namespace std;

void explainMap()
{
    //contains key and value-stores unique keys in sorted order
    map<int,string>mp;

    mp[1]="Paru";//key=1 and value="Soorya"
    mp.emplace(2,"Arjun");//key=2 and value="Parvathy"
    mp.insert({3,"Soorya"});//key=3 and value="Arjun"

    for(auto it:mp) //not an iterator, but a pair. Hence you can directly access each element of the pair.
    {
        cout<<it.first<<" , "<<it.second<<endl;
    }

    auto it1=mp.find(2);//this is an iterator pointing to address
    cout<<it1->second<<endl;//hence different syntax
    
}
int main()
{
   
   explainMap();
    return 0;

}