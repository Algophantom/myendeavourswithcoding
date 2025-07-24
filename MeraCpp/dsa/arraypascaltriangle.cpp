#include<bits/stdc++.h>
#include<cmath>
using namespace std;



vector<vector<int>> generate(int numRows) {
    vector<vector<int>> pascal(numRows);
    long long value=0;
    for(int i=0;i<numRows;i++)
    {
        pascal[i].resize(i + 1, 1);
        for(int j=1;j<i;j++)
        {
            pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
        }
    }

    return pascal;
}

int main()
{
   
    vector<vector<int>> pascal = generate(14);
    for(int i=0;i<14;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<pascal[i][j]<<" , ";
        }
        cout<<" | ";
    }
   
   
    return 0;
}