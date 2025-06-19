//https://www.naukri.com/code360/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?leftPanelTabValue=PROBLEM
#include <iostream>
#include <bits/stdc++.h> 
#include <vector>
using namespace std;
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int max = arr[0];

    int i;
    for(i = 0; i< n; ++i){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}
