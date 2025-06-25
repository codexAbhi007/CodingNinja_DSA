// https://www.naukri.com/code360/problems/rotate-matrix-by-90-degrees_981261?leftPanelTabValue=PROBLEM
using namespace std;
#include <bits/stdc++.h> 
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix)
{
    int i;
    int j;
    int n = matrix.size();

    for(i = 0 ; i < n - 1; ++i){
        for(j = i + 1; j < n; ++j){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(j = 0; j < n; ++j){
        int top = 0;
        int bottom = n -1;
        while(top < bottom){
            swap(matrix[top][j], matrix[bottom][j]);
            ++top;
            --bottom;
        }
    }

    return matrix;
}