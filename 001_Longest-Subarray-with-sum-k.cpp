// https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_6682399?count=25&page=2&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

//* Better Approach -> Hashing TC-> O(nlogm) and SC -> O(m)
//* For handling +ve,-ve and 0s

//* Optimal Apporach -> Two Pointer or Sliding Window TC -> O(2n) and SC -> O(1)
//* Only for handling +ve and 0s

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Approach 1: Two Pointer (Sliding Window) - works only for non-negative integers
    int longestSubarrayWithSumK_SlidingWindow(vector<int> &a, long long k)
    {
        long long sum = 0;
        int maxLen = 0;
        map<long long, int> prefixSumMap;

        for (int i = 0; i < a.size(); ++i)
        {
            sum = sum + a[i];

            if (sum == k && i + 1 > maxLen)
            {
                maxLen = i + 1;
            }
            else
            {
                long long remainingSum = sum - k;
                if (prefixSumMap.find(remainingSum) != prefixSumMap.end() &&
                    (i - prefixSumMap[remainingSum] > maxLen))
                {
                    maxLen = i - prefixSumMap[remainingSum];
                }
            }

            if (!(prefixSumMap.find(sum) != prefixSumMap.end()))
            {
                prefixSumMap[sum] = i;
            }
        }

        return maxLen;
    }

    // Approach 2: Prefix Sum + Hash Map - works for both positive and negative integers
    int longestSubarrayWithSumK_HashMap(vector<int> &arr, int k)
    {
        map<long long, int> prefixSumMap;
        long long sum = 0;
        int maxLen = 0;

        for (int i = 0; i < arr.size(); ++i)
        {
            sum += arr[i];

            if (sum == k)
            {
                maxLen = i + 1;
            }

            long long remainingSum = sum - k;
            if (prefixSumMap.find(remainingSum) != prefixSumMap.end())
            {
                maxLen = max(maxLen, i - prefixSumMap[remainingSum]);
            }

            // Store only the first occurrence of the prefix sum
            if (prefixSumMap.find(sum) == prefixSumMap.end())
            {
                prefixSumMap[sum] = i;
            }
        }

        return maxLen;
    }
};

int main()
{
    Solution sol;

    // Test case: for non-negative numbers
    vector<int> a = {1, 2, 1, 0, 1, 1, 0};
    int k = 4;

    cout << "Using Sliding Window (Non-Negative only): "
         << sol.longestSubarrayWithSumK_SlidingWindow(a, k) << endl;

    // Test case: works even if array has negative numbers
    vector<int> b = {1, -1, 5, -2, 3};
    int target = 3;

    cout << "Using HashMap (Works with Negatives): "
         << sol.longestSubarrayWithSumK_HashMap(b, target) << endl;

    return 0;
}
