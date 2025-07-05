// https://www.naukri.com/code360/problems/search-in-a-2d-matrix-ii_1089637?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
bool findInMatrix(int x, vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int row = 0;
    int col = m - 1;
    while (row < n && col >= 0)
    {
        if (matrix[row][col] == x)
        {
            return true;
        }
        else if (matrix[row][col] < x)
            ++row;
        else
            --col;
    }
    return false;
}