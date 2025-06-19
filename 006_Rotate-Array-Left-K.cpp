// /https://www.naukri.com/code360/problems/rotate-array_1230543?leftPanelTabValue=PROBLEM
#include <iostream>
#include <bits/stdc++.h> 
#include <vector>
using namespace std;

vector<int> rotateArray(vector<int>arr, int k) {
   
    int n = arr.size();
    for(int i = 0;i<k;++i){
            int temp = arr[0];
            int j;
        for(j = 0; j < n-1;++j){
            arr[j] = arr[j+1];
            
        }
        arr[n-1] = temp;
    }

    return arr;
}
