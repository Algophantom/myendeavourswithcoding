#include<bits/stdc++.h>
using namespace std;


string palindromecheck(string str,int i)
{
    int j=str.length();
    if(i>=j/2) return str;
    swap(str[i],str[j-i-1]);
    cout<<str<<endl;
    str=palindromecheck(str,i+1);
    return str;
}
int main()
{
    string str;
    getline(cin,str);
    string truth=palindromecheck(str,0);
    if(truth == str) cout<<"true";
    else cout<<"false";
    return 0;
    
}