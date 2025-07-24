#include<bits/stdc++.h>
using namespace std;

void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop(); //FIFO , first element of the queue pops out

    cout<<q.front()<<endl; //first element in the queue
    cout<<q.back();//last element in the queue
    
}

void explainPriorityQueue()
{
    priority_queue<int> qu; //max heap
    qu.push(5);         //push and pop are O(logn), top is O(1)
    qu.push(10);
    qu.push(1);

    cout<<qu.top()<<endl;
    while(!qu.empty())
    {
        cout<<qu.top()<<endl;
        qu.pop();
    }

    //min heap
    priority_queue<int,vector<int>,greater<int>> mqu;
    mqu.push(10);
    mqu.push(2);
    mqu.push(1);
    cout<<mqu.top()<<endl;
}
int main()
{
   
   explainPriorityQueue();
    return 0;

}