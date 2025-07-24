#include<bits/stdc++.h>
using namespace std;
  
void setZeroes(vector<vector<int>>& matrix) {
int n=matrix.size();
int m=matrix[0].size();
vector<vector<int>> copy = matrix;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {  
        if(copy[i][j]==0)
        {
            for(int k=0;k<n;k++)
            {
                matrix[k][j]=0;
            }
            for(int k=0;k<m;k++)
            {
                matrix[i][k]=0;
            }
        }

    }
}
        

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
    vector<vector<int>> nums = {{0,1}};
    setZeroes(nums);
   

    return 0;
}