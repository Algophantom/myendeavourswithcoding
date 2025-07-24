#include<bits/stdc++.h>
using namespace std;

void printpattern1(int n)
{
     for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void printpattern2(int n)
{
     for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void printpattern3(int n)
{
     for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
void printpattern5(int n)
{
     for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void printpattern6(int n)
{
     for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void printpattern7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<"\n";
    }
}
void printpattern8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*(n-i)-1);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<"\n";
    }
}
void printpattern10(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if (i>n) {stars=2*n-i;}
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void printpattern13(int n)
{
    for(int i=0;i<n;i++)
    {

    }
}
int main()
{
    printpatterns(4);
    return 0;

}