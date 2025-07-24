#include <iostream>
using namespace std;
int main() {
    int k=1;
    char ch;
    while(k!=0)
    {
    long long int sum=0;// to handle large sums
    int n=0;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int j=1;
    for(int i =1; i<=n;i++)
    {
        if(j%2==1)
        {
            sum=sum+j;
            j=j+2;

        }
        else{
            j++;
        }
        
        
    }
cout<<"The sum of the first "<<n<<" odd numbers is: "<<sum<<endl;
cout<<" Do you want to try another number : Y / N"<<endl;
cin>>ch;
cin.ignore();
if (ch == 'Y' || ch == 'y')
{
    
}
else if(ch== 'N'|| ch == 'n')
{
    break;
}
else{
    cout<<"Wrong input"<<endl;
    break;
}
    }
    cout<<"The end of program"<<endl;
    return 0;
 
}
