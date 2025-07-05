// https://www.naukri.com/code360/problems/capacity-to-ship-packages-within-d-days_1229379?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
using namespace std;

int findSum(vector<int> &arr)
{
    int sum = 0;
    int i;
    for (i = 0; i < arr.size(); ++i)
    {
        sum += arr[i];
    }
    return sum;
}
int findMax(vector<int> &arr)
{
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); ++i)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

bool isPossible(int capacity, int days, vector<int> &weights)
{
    int dayCnt = 1;
    int weightSum = 0;
    for (int i = 0; i < weights.size(); ++i)
    {
        weightSum += weights[i];
        if (weightSum > capacity)
        {
            dayCnt += 1;
            weightSum = weights[i];
        }
    }
    if (dayCnt <= days)
        return true;
    return false;
}
int leastWeightCapacity(vector<int> &weights, int days)
{
    int n = weights.size();
    int low = findMax(weights);
    int high = findSum(weights);
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (isPossible(mid, days, weights))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}