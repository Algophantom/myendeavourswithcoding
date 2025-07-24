#include<bits/stdc++.h>
using namespace std;

void explainList()
{
    list <int> ls;

    ls.push_back(2);
    ls.emplace_back(4);
    ls.emplace_front(5);
    ls.push_front(1);

    auto it = ls.begin();
    it++;
    ls.erase(it);



    for(auto it:ls)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<ls.back();
    
    
    


    //begin,end,swap,insert are the same.

}
int main()
{
   
   explainList();
    return 0;

}