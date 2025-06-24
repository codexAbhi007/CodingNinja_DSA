// https://www.naukri.com/code360/problems/leaders-in-an-array_873144?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h> 
using namespace std;
vector<int> findLeaders(vector<int> &elements, int n) {
    int i;
    int max_var = INT_MIN;
    vector<int> l;
    for(i = n - 1;i >= 0; --i){
        if(elements[i] > max_var){
            l.push_back(elements[i]);
            max_var = elements[i];
        }
    }
    reverse(l.begin(), l.end());
    return l;
}
