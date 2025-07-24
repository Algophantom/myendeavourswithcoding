#include<bits/stdc++.h>
using namespace std;
  
void setZeroes(vector<vector<int>>& matrix) {
int n=matrix.size(); //TC - O(MN + MN)
//SC = O(N)+O(M)
/*
Consider a row vector and col vector and store the occurence of zero in the specific row or col
*/
int m=matrix[0].size(); 
vector<int> row(n,0);
vector<int> col(m,0);
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(matrix[i][j]==0)
        {
            row[i]=1;
            col[j]=1;
        }
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(row[i]==1||col[j]==1)
        {
            matrix[i][j]=0;
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