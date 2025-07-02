// https://www.naukri.com/code360/problems/selection-sort_981162?leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
   int i;
   int j;
   for(i = 0; i < n-1 ; ++i){
       int min_index = i;
        for(j = i+1; j < n; ++j){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
            
        }
        swap(arr[min_index], arr[i]);
   }
}