#include<bits/stdc++.h>
using namespace std;


bool palindromecheck(string str)
{
    string copy=str;
    int j=str.length();
    for(int i=0;i<j;i++)
    {
        copy[i]=str[j-i-1];
    }
    cout<<copy<<endl;
    if(str==copy) return true;
    else return false;
}
int main()
{
    string str;
    cin>>str;
    bool truth=palindromecheck(str);
    cout<<truth;
    return 0;
    
}