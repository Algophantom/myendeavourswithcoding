#include <iostream>
using namespace std;
int main() {
int a = 11,b = 5;
cout<<((b!=a)||(b==0))<<endl;//or
cout<<((b==a)&&(b==5))<<endl;//and
cout<<!(b!=a)<<endl;//not
    return 0;
}
// this is not a bitwise operator