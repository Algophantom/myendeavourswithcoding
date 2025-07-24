#include<bits/stdc++.h>
using namespace std;
  
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();//no of rows
    int m = matrix[0].size();//columns
    vector<vector<int>> copy=matrix;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            matrix[i][j]=copy[j][i];
        }
    }
    copy=matrix;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            matrix[i][j]=copy[i][m-j-1];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    vector<vector<int>> test = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
   rotate(test);
   
    return 0;
}