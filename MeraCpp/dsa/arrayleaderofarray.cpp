#include<bits/stdc++.h>
using namespace std;
  
vector<int> leaders(vector<int>& arr) {
    int n=arr.size();
    int count =0;
    vector<int> answer;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>=arr[j])
            {
                count++;
            }
        }
        if(count==(n-i-1)) {
            answer.push_back(arr[i]);
        }
        count=0;
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