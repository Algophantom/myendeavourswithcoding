#include <iostream>
using namespace std;
int main() {
    int n;
    
    cout<<"Enter your marks: "<<endl;
    cin>>n;
if(n>=90)
{
    cout<<"Topper hai bhai tu"<<endl; 
}
else if((n>=80)&&(n<90))
{
    cout<<"Chal koi na|Dil na chota kar"<<endl;
}
else {
    cout<<"Tu rehne de"<<endl;
}
return 0;
}
