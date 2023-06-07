#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
   int top = 0, left = 0, bottom = n-1, right = m-1;
    while(top<bottom && left <right){
        int temp = mat[top][left];
        int k;
        for(int i = left+1; i<=right; i++){
            k = mat[top][i];
            mat[top][i] = temp;
            temp = k;
        }
        top++;
        for(int i = top; i<=bottom; i++){
            k = mat[i][right];
            mat[i][right] = temp;
            temp = k;
        }
        right--;
        for(int i = right; i>=left; i--){
            k = mat[bottom][i];
            mat[bottom][i] = temp;
            temp = k;
        }
        bottom--;
        for(int i = bottom; i>=top; i--){
            k = mat[i][left];
            mat[i][left] = temp;
            temp = k;
        }
        left++;
        mat[left-1][top-1] = temp;

    }
}