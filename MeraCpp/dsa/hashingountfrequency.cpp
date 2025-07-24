#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    int arr[10]={1,2,3,2,1,2,3,4,2,10};
    

    //pre-compute
    unordered_map <int,int> mpp;//no order
    for(int i=0;i<10;i++)
    {
        mpp[arr[i]]++;
        //for i=0, mpp[arr[0]]=mpp[1] , means value of the map at key 1.
        //key 1, if it is not present in the map, a new key called 1 is created and value is set at 0, then ++ happens and value is updated to 1
        //so on
    }
    
        int number;
        cin>>number;
        //fetch
        cout<< mpp[number] <<endl; //number represents the key, value of the key is printed 
        for(auto it:mpp)
        {
            cout<<it.first<<"-->"<<it.second<<endl;
        }

    
    return 0;
}