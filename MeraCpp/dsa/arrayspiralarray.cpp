#include<bits/stdc++.h>
using namespace std;
  
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m= matrix[0].size();
        vector <int> answer(m*n,0);
        int left = 0;
        int top =0;
        int bottom = n-1;
        int right = m-1;
        int vectorpoint = 0;
    while(left <= right && top <= bottom) 
    {
       for(int j=left;j<=right;j++)
        {
            answer.push_back(matrix[top][j]);
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
           answer.push_back(matrix[i][right]);
        }
        right--;
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                answer.push_back(matrix[bottom][j]);
            bottom--;
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                answer.push_back(matrix[i][left]);
            left++;
        }
       
    }
        return answer;
    }

int main()
{
   vector<vector<int>> test = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
   vector<int> loki = spiralOrder(test);
   for(int i=0;i<loki.size();i++)
   {
    cout<<loki[i]<<" ";
   }
    return 0;
}