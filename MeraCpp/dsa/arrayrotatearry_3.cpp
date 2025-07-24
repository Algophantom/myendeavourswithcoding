#include<bits/stdc++.h>
using namespace std;
  
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();//no of rows
   // int m = matrix[0].size();//columns,but not needed
   //tc = O(N2), sc =O(N2)
    vector<vector<int>> copy = matrix;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matrix[j][n-i-1]=copy[i][j];//thought process - write the indices of the original matrix and then the rotated matrix elements,compare the values and find a relation.
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    vector<vector<int>> test = {{1,2,3},{4,5,6},{7,8,9}};
   rotate(test);
   
    return 0;
}