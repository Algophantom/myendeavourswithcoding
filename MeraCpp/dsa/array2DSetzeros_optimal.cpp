#include<bits/stdc++.h>
using namespace std;
  
void setZeroes(vector<vector<int>>& matrix) {
int n=matrix.size(); 
int m=matrix[0].size(); 
int col1=1;

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(matrix[i][j]==0)
        {
            matrix[i][0]=0;         //TC=O(MN)
            if(j!=0)
            {matrix[0][j]=0;}
            else col1=0;
        }
    }
}
for(int i=1;i<n;i++)
{
    for(int j=1;j<m;j++)
    {
        if(matrix[i][j]!=0)
        {
            if(matrix[i][0]==0||matrix[0][j]==0) //TC=O(MN)
            {
                matrix[i][j]=0;
            }
        }
    }
}
if (matrix[0][0]==0) {
    for(int i=0;i<m;i++)
    {
        matrix[0][i]=0;     //O(M)
    }
}
if (col1==0) {
    for(int i=0;i<n;i++)
    {
        matrix[i][0]=0; //O(N)
    }
}

//TC = O(2MN)+O(M+N)

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