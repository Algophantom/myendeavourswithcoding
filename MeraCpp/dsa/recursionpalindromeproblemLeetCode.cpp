#include<bits/stdc++.h>
using namespace std;
string removeall(string str)
{
    for(int k=0;k<str.length();k++)
    {
        if(str[k]==' '||(!isalnum(str[k])))
        {
            str.erase(k,1);
            k--;
        }
    
    }
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}
bool isPalindrome(string s)
{   s=removeall(s);
    string str=s;
    int j=s.length();
    for(int i=0;i<j/2;i++)
    {
        swap(str[i],str[j-i-1]);
        cout<<str<<endl;
    }  
    if(str==s) {return 1;}
    else return 0;
}

int main()
{
    string str;
    getline(cin,str);
    bool truth = isPalindrome(str);
    cout<<truth;
    return 0; 
    
}