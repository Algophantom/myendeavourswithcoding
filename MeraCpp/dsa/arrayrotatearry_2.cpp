#include<bits/stdc++.h>
using namespace std;
  
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();//no of rows
    int m = matrix[0].size();//columns
    //tc = o(n2/4)+o(n*n/2)
    //sc = o(1)
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0;i<n;i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
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
    vector<vector<int>> test = {{1,2,3},{4,5,6},{7,8,9}};
   rotate(test);
   
    return 0;
}