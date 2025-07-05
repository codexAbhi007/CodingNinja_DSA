// https://www.naukri.com/code360/problems/square-root_893351?source=youtube&campaign=love_babbar_codestudio2&leftPanelTab=0&leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
int floorSqrt(int a)
{
    if (a == 0)
        return 0;

    int ans = 1;
    int low = 1;
    int high = a / 2;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (1LL * mid * mid <= a)
        { // Prevent integer overflow
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
