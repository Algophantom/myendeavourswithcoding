#include <iostream>
using namespace std;
int main() {
int a= 10;
int b= a++;//b stores the initial value of a(post increment operator)
cout<<"the value of a is: "<<a<<endl;//a is incremented
int c=++a;//store the final value of a(pre increment operator)
cout<<"the value of b is: "<<b<<endl;
cout<<"the value of c is: "<<c<<endl;

int d = a--;
int e = --a;
cout<<"the value of e is: "<<e<<endl;
cout<<"the value of d is: "<<d<<endl;
return 0;

}
