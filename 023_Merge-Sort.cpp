// https://www.naukri.com/code360/problems/merge-sort_920442?leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h>
using namespace std;



void merge_sorted_arr(vector<int> & arr, int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            ++left;
        }
        else{
            temp.push_back(arr[right]);
            ++right;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        ++left;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        ++right;
    }

    for(int i = low; i<=high;++i){
        arr[i] = temp[i - low];
    }
}


void my_mergeSort(vector<int> & arr, int low,int high){
    if(low >= high) return;
    int mid = (low + high) /2;
    my_mergeSort(arr,low,mid);
    my_mergeSort(arr,mid+1, high);
    merge_sorted_arr(arr,low,mid,high);
}



void mergeSort(vector < int > & arr, int n) {
    my_mergeSort(arr, 0,n-1);
}