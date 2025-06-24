// https://www.naukri.com/code360/problems/rearrange-alternatively_873851?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
using namespace std;
void rearrange(vector<int> &arr)
{
	int n = arr.size();
	vector<int> pos_arr;
	vector<int> neg_arr;

	int i;
	for(i = 0; i < n; ++i){
		if(arr[i] > 0){
			pos_arr.push_back(arr[i]);
		}
		else{
			neg_arr.push_back(arr[i]);
		}
	}

	int pos_arr_len = pos_arr.size();
	int neg_arr_len = neg_arr.size();

	if(pos_arr_len > neg_arr_len){
		for(i = 0 ; i < neg_arr_len; ++i){
			arr[i*2] = pos_arr[i];
			arr[2*i + 1] = neg_arr[i];
		}
		//Add remaining positive elements
		int remaining_element_index_start = 2*neg_arr_len;
		for(i = neg_arr_len; i < pos_arr_len; ++i){
			arr[remaining_element_index_start] = pos_arr[i];
			++remaining_element_index_start;
		}
	}else{
		for(i = 0 ; i < pos_arr_len; ++i){
			arr[i*2] = pos_arr[i];
			arr[2*i + 1] = neg_arr[i];
		}
		//Add remaining Negative elements
		int remaining_element_index_start = 2*pos_arr_len;
		for(i = pos_arr_len; i < neg_arr_len; ++i){
			arr[remaining_element_index_start] = neg_arr[i];
			++remaining_element_index_start;
		}
	}
}
