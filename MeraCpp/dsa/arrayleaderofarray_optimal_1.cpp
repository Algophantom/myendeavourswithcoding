#include<bits/stdc++.h>
using namespace std;
  
vector<int> leaders(vector<int>& arr) {
    //TC=O(N)
    int n=arr.size();
    int count =0;
    vector<int> answer;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i-1]>=arr[i]&&i>0)
        {
            answer.push_back(arr[i-1]);
            
        }
    }

    return answer;

}
int main()
{
    vector<int> test = {16, 17, 4, 3, 5, 2};
    vector<int> con = leaders(test);
    for(int i=0;i<con.size();i++)
    {
        cout<<con[i]<<" ";
   
    }
    return 0;
}