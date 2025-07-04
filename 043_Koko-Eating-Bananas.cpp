// https://www.naukri.com/code360/problems/koko-eating-bananas_10870969?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

    int findMax(vector<int> &arr){
        int maxi = INT_MIN;
        for(int i = 0; i < arr.size(); ++i){
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }

    long long findTotalHours(vector<int> &arr, int hourly){
        long long totalHrs = 0;
        for(int i = 0; i < arr.size(); ++i){
            totalHrs += (arr[i] + hourly - 1) / hourly;
        }
        return totalHrs;
    }

int minimumRateToEatBananas(vector<int> piles, int h) {
       int low = 1;
        int high = findMax(piles);
        int ans = INT_MAX;
        while(low <= high){
            int mid = low + (high - low) / 2;
            long long totalHrs = findTotalHours(piles, mid);
            if(totalHrs <= h){
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
}