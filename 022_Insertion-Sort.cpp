// https://www.naukri.com/code360/problems/insertion-sort_3155179?leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    int i;
    int j;
    for(i = 0; i < n; ++i){
        j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1],arr[j]);
            --j;
        }
    }
}