// https://www.naukri.com/code360/problems/bubble-sort_624380?leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here
    int i;
    int j;
    for(i=0; i < n-1; ++i){
        int didSwap= 0;
        for(j = 0; j < n-i-1; ++j){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
    }
}