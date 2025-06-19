// /https://www.naukri.com/code360/problems/remove-duplicates-from-sorted-array_1102307?leftPanelTabValue=PROBLEM

#include <iostream>
#include <bits/stdc++.h> 
#include <vector>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
	int i = 0;
	int j = 1;

	for(; j < arr.size(); ++j){
		if(arr[i] < arr[j]){
			if(arr[i+1] != arr[j]){
				arr[i+1] = arr[j];
			}
			++i; 
		}
		
	}

	return i + 1;
}