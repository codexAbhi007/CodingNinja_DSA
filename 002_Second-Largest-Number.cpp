// /https://www.naukri.com/code360/problems/ninja-and-the-second-order-elements_6581960?leftPanelTabValue=PROBLEM
#include <iostream>
#include <bits/stdc++.h> 
#include <vector>
using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int max =INT_MIN, smax = INT_MIN;
    int min = INT_MAX, smin = INT_MAX;

    int i;
    for(i = 0; i < n; ++i){
        if(a[i] > max){
            smax = max;
            max = a[i];
        }
        else if(a[i] > smax && a[i] < max){
            smax = a[i];
        }
    }

     for(i = 0; i < n; ++i){
        if(a[i] < min){
            smin = min;
            min = a[i];
        }
        else if(a[i] < smin && a[i] > min){
            smin = a[i];
        }
    }

    return {smax,smin};
}
