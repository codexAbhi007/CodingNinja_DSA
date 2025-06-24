// https://www.naukri.com/code360/problems/next-permutaion_893046?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int i;
    // int n = permutation.size();
    int breakpoint = -1;

    for(i = n -1; i >= 1; --i){
        if(permutation[i-1] < permutation[i]){
            breakpoint = i -1;
            break;

        }
    }
    if(breakpoint == -1){
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }

    for(i=n-1; i > breakpoint; --i){
        if(permutation[i] > permutation[breakpoint]){
            swap(permutation[i], permutation[breakpoint]);
            break;
        }
        
    }
    reverse(permutation.begin() + breakpoint + 1, permutation.end());
    return permutation;
}