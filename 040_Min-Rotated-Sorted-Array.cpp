// https://www.naukri.com/code360/problems/rotated-array_1093219?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int mini = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // Whole Search Space is sorted
        if (nums[low] <= nums[high])
        {
            mini = min(mini, nums[low]);
            break;
        }
        if (nums[low] <= nums[mid])
        { // Left half is sorted
            mini = min(mini, nums[low]);
            low = mid + 1; // Eliminate the left half
        }
        else
        {
            mini = min(mini, nums[mid]);
            high = mid - 1; // Eliminate the Right half
        }
    }
    return mini;
}