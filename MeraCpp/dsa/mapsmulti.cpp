q#include<bits/stdc++.h>
using namespace std;

void explainMulMap()
{
    //contains key and value-can store duplicate keys-sorted
    multimap<int,string>mmp;

    mmp.insert({2,"Paru"});
    mmp.emplace(2,"Arjun");//key=2 and value="Parvathy"
    mmp.insert({3,"Soorya"});//key=3 and value="Arjun"

    for(auto it:mmp) //not an iterator, but a pair. Hence you can directly access each element of the pair.
    {
        cout<<it.first<<" , "<<it.second<<endl;
    }

    auto it1=mmp.find(2);//this is an iterator pointing to address
    cout<<it1->second<<endl;//hence different syntax
    
}
int main()
{
   
   explainMulMap();
    return 0;

}