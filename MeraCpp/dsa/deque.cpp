#include<bits/stdc++.h>
using namespace std;

void explainDeque()
{
    deque <int>dq;

    dq.push_back(2);
    dq.emplace_back(4);
    dq.emplace_front(5);
    dq.push_front(1);

    dq.pop_back();
    dq.pop_front();

    

    for(auto it:dq)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<dq.back();
    

    


    //begin,end,swap,insert are the same.

}
int main()
{
   
   explainDeque();
    return 0;

}