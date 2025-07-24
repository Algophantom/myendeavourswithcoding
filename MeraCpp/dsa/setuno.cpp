#include<bits/stdc++.h>
using namespace std;

void explainUnOSet()
{
    unordered_set<int> us; //elements are unique but not sorted and placed randomly.
    //all operations are O(1) complexity
    us.insert(1);
    us.insert(22);
    us.insert(7);
    us.insert(9);
    us.emplace(15);

    while(!us.empty())
    {
        auto it=us.begin();
        cout<<*it<<endl;
        us.erase(it);
    }
    

    
}
int main()
{
   
   explainUnOSet();
    return 0;

}