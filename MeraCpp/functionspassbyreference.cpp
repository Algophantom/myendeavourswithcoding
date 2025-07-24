#include<bits/stdc++.h>
using namespace std;

void doSomething(string &str)
{
    str[0]='O';
}

int main()
{
   string str;
   cin>>str;
    doSomething(str);
    cout<<str;
    return 0;

}