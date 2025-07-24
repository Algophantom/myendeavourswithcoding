#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter character you want tested: ";
    cin>>ch;
    int b=ch;
    
    if(b>=97&&b<=122)// if(ch>='a'&&ch<='z')
    {
        cout<<"The character is in lowercase.\n";
        
    }
    else if(b>=65&&b<=90)//if(ch>='A'&&ch<='Z')
    {
        cout<<"The character is in uppercase.\n";
    }
    else
    {
        cout<<"The input is invalid for the particular test.\n";
    }

}
