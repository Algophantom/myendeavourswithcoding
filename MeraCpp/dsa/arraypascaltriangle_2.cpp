#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int NCR(int n,int r)
{
    int result = 1;
    for(int i=0;i<r;i++)
    {
        result=result*(n-i);
        result=result/(i+1);
    }
    return result;
}

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> pascal(numRows);
    long long value=0;
    for(int i=0;i<numRows;i++)
    {
        pascal[i].resize(i + 1, 1);//each row is initialised with row+1 1s
        for(int j=1;j<i;j++)
        {
            pascal[i][j]= NCR(i,j); //pascal [i][j]= iCj
        }
    }

    return pascal;
    //TC=O(N2)
    //SC=0(N);
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