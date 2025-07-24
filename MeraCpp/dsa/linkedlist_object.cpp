#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
  
};
Node* convertArr2LL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=0;i<arr.size();i++)
    {
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }

    return head;
}
int main()
{
   vector<int> arr={2,5,8,7};
   Node y=Node(arr[0],nullptr);
   cout<<y.data;
   cout<<" "<<y.next<<"\n";

   Node* z=new Node(arr[0],nullptr);
   cout<<z;
    return 0;
    
}