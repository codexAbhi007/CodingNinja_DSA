// https://www.naukri.com/code360/problems/majority-element_842495?leftPanelTabValue=PROBLEM

//* Moore's Voting Algorithm

#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(int arr[], int n) {
	int count = 0;
       int el;
       int i;
       for(i = 0; i< n; ++i){
        if(count == 0){
            el = arr[i];
            ++count;
        }
        else if(arr[i] != el){
            --count;
        }
        else{
            ++count;
        }
       }
    //Verification necessary as greatest maynot exists
       int count2 = 0;
       for(i = 0; i < n;++i){
           if(arr[i] == el) count2++;
       }

       if(count2 > n / 2){
           return el;
       }

       return -1;

}