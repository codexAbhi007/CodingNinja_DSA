// https://www.naukri.com/code360/problems/ninja-and-the-sorted-check_6581957?leftPanelTabValue=PROBLEM
#include <iostream>
#include <bits/stdc++.h> 
#include <vector>
using namespace std;
int isSorted(int n, vector<int> a) {
    // Write your code here.
    int i;
    int isSorted = 1;
    for(i = 1; i< a.size();++i){
        if(!(a[i-1] <= a[i])){
            isSorted = 0;
            break;
        }
    }

    return isSorted;
}
