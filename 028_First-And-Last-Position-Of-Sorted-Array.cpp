// https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;


    int lowerBound(vector<int> &arr, int n, int target){
        int low = 0;
        int high = n - 1;
        int ans = n;
        while(low <= high){
            int mid = low + (high - low) / 2;
            // maybe an answer
            if(arr[mid] >= target){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
    int upperBound(vector<int> &arr, int n, int target){
        int low = 0;
        int high = n - 1;
        int ans = n;
        while(low <= high){
            int mid = low + (high - low) / 2;
            // maybe an answer
            if(arr[mid] > target){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int lb = lowerBound(arr, n, k);
    if(lb == n || arr[lb] != k) return {-1, -1};
    return {lb, upperBound(arr, n, k) - 1};
}

