// https://www.naukri.com/code360/problems/longest-consecutive-sequence_759408?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    if(n == 0) return 0;
    unordered_set<int>st;
    int longest = 1;
    int i;
    for(i = 0; i< n; ++i){
        st.insert(arr[i]);
    }
    for(auto it: st){
        if(st.find(it - 1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
               x = x + 1;
               cnt = cnt + 1; 
            }
            longest = max(longest,cnt);
        }
    }
    return longest;
}