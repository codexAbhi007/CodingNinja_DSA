// https://www.naukri.com/code360/problems/kth-missing-element_893215?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

int missingK(vector<int> arr, int n, int k)
{

    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int missing = arr[mid] - (mid + 1);
        if (missing < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return k + high + 1;
}
