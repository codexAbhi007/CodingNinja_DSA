// https://www.naukri.com/code360/problems/search-in-a-rotated-sorted-array-ii_7449547?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

bool searchInARotatedSortedArrayII(vector<int>&nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] == target) return true;
            if(nums[mid] == nums[low] && nums[mid] == nums[high]){
                ++low; --high;
                continue;
            }
            
            if(nums[low] <= nums[mid]){ //Left sorted
                if(nums[low] <= target && target <= nums[mid]){
                    high = mid -1 ;
                }
                else {
                    low = mid + 1;
                }
            }else{ //Right Half sorted
                if(nums[mid] <= target && target <= nums[high]){
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return false;
}
