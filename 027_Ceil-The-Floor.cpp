// https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int floor ;
	int ceil;

	int low = 0;
	int high = n - 1;
	int ans = n;
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(a[mid] >= x){
			ans = mid;
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	}

	if(ans >= 0 && ans < n) ceil = a[ans];
	else ceil = -1;

	// floor
	low = 0;
	high = n -1;
	ans = n;
	while(low <=high){
		int mid = low +(high - low) / 2;
		if(a[mid] <= x){
			ans = mid;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	if(ans >= 0 && ans < n) floor = a[ans];
	else floor = -1;
	pair<int,int> p = {floor,ceil};
	return p;
}