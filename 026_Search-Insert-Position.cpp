// https://www.naukri.com/code360/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& arr, int m)
{
	    int low = 0;
        int n = arr.size();
        int high = n - 1;
        int ans = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= m) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    
}