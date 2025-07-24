#include<bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int,pair<int,int>>p= {1,{3,4}};
    cout<<p.second.first;
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].second;
}
int main()
{
    explainPair();
    return 0;

}