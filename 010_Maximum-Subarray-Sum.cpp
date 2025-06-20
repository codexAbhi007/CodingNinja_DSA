// https://www.naukri.com/code360/problems/maximum-subarray-sum_628288?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    int n = nums.size();

    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += nums[j];
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }
    return maxSum;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int result = maxSubArray(nums);
    cout << result << endl;

    return 0;
}
