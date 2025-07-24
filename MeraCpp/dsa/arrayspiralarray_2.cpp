#include<bits/stdc++.h>
using namespace std;
  
vector<int> spiralOrder(vector<vector<int>>& matrix) {
          int n = matrix.size();
    int m = matrix[0].size();
    vector<int> answer;
    answer.reserve(m * n); // Reserve space to avoid reallocations

    int left = 0, top = 0;
    int bottom = n - 1, right = m - 1;

    while (left <= right && top <= bottom) {
        // Traverse from left to right
        for (int j = left; j <= right; j++)
            answer.push_back(matrix[top][j]);
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; i++)
            answer.push_back(matrix[i][right]);
        right--;

        // Traverse from right to left (Only if `top <= bottom`)
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                answer.push_back(matrix[bottom][j]);
            bottom--;
        }

        // Traverse from bottom to top (Only if `left <= right`)
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