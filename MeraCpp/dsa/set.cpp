#include<bits/stdc++.h>
using namespace std;

void explainSet()
{
    set<int> st; //elements are sorted and unique
    st.insert(10);
    st.insert(1);
    st.insert(22);
    st.emplace(33);
    st.insert(56);

    auto it = st.begin();
    advance(it,1);
    cout<<*(it)<<endl;

    auto it3=st.find(1);
    auto it4=st.find(22);
    int count=st.count(1);

    st.erase(it3,it4);
    for(auto it1=st.begin();it1!=st.end();++it1)
    {
        cout<<*it1<<" ";
        

    }
    cout<<endl;
    cout<<st.count(22)<<endl;

    auto it5 =st.lower_bound(23);
    auto it6 = st.upper_bound(23);
    cout<<*it6;
 
}
int main()
{
   
   explainSet();
    return 0;

}