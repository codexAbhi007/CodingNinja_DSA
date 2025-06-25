// https://www.naukri.com/code360/problems/set-matrix-zeros_3846774?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
	int col0 = 1;
	int i;
	int j;
	int rows = matrix.size();
	int cols = matrix[0].size();
	//Step 1: Marking
	for(i = 0; i < rows; ++i){
		for(j = 0; j < cols; ++j){
			
			if(matrix[i][j] == 0){
				matrix[i][0] = 0; //Mark ith row;
			
				if(j!= 0){
					matrix[0][j] = 0;

				}else{
					col0 = 0;
				}
			}
		}
	}
	//Step2 start from smaller matrix
	for(i = 1;i < rows; ++i){
		for(j =1; j < cols; ++j){
			if(matrix[i][j] != 0){
				if(matrix[0][j] == 0 || matrix[i][0] == 0){
					matrix[i][j] = 0;
				}
			}
		}
	}


	//Step 3 update the hash array
	if(matrix[0][0] == 0){
		for(j=1; j < cols; ++j){
			matrix[0][j] = 0;
		}
	}

	if(col0 == 0){
		for(i = 0; i < rows; ++i){
			matrix[i][0] = 0;
		}
	}


}