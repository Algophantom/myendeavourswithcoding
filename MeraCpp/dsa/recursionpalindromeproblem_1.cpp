#include<bits/stdc++.h>
using namespace std;


bool palindromecheck(string str,int i)
{
    int j=str.length();
    if(i>j/2){return true;}
    if(str[i]==str[j-i-1]){
        return palindromecheck(str,i+1);
    }
    else return false;
}
int main()
{
    string str;
    cin>>str;
   bool truth=palindromecheck(str,0);
    cout<<truth;
    return 0;
    
}