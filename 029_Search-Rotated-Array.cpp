// https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int n, int target)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
  
        int low = 0;
        int high = n - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] == target) return mid;

            
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
        return -1;
}
