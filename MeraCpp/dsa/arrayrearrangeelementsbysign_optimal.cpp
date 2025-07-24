#include<bits/stdc++.h>
using namespace std;
  
void setZeroes(vector<vector<int>>& matrix) {
        

           for(int i=0;i<matrix.size();i++)
   {
    for(int j=0;j<matrix[i].size();j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
   }

    }
    
int main()
{
    vector<vector<int>> nums = {{1,0,1},{0,1,0},{1,0,1}};
    setZeroes(nums);
   

    return 0;
}