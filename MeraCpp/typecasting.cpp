#include <iostream>
using namespace std;
int main() {
   char grade = 'x';
   int value = grade;//implicit conversion
   cout<<value<<endl;
   double price = 100.99;
   int newPrice= (int)price;//typecasting
   cout<<price<<endl;
   cout<<newPrice<<endl;
   

    return 0;
}
//this is a boilerplate template. 
