// https://www.naukri.com/code360/problems/sorted-array_6613259
#include <bits/stdc++.h>
using namespace std;

vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i = 0;
    int j = 0;
    vector<int> result;
    int n = a.size();
    int m = b.size();

   

    while(i < n && j < m){
        if(a[i] <= b[j]){
            if(result.empty() || result.back() != a[i]){
                result.push_back(a[i]);
            }
            ++i;
          
        }else{
            if(result.empty() || result.back() != b[j]){
                result.push_back(b[j]);
               
            }
            ++j;       
        }
    }
    while(i < n){
        if(result.back() != a[i]){
            result.push_back(a[i]);     
        }
        ++i;
        
    }
    while(j < m){
        if(result.back() != b[j]){ 
            result.push_back(b[j]);
            
        }
        ++j;
    }

    return result;
}