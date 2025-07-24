#include<bits/stdc++.h>
using namespace std;

void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    st.pop();

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
}
int main()
{
   
   explainStack();
    return 0;

}