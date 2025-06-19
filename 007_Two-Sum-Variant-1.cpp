//https://www.naukri.com/code360/problems/reading_6845742?leftPanelTabValue=PROBLEM

#include <iostream>
#include <bits/stdc++.h> 
#include <vector>
using namespace std;

string read(int n, vector<int> book, int target)
{
    int left = 0;
    int right = n -1 ;
    sort(book.begin(), book.end());

    while (left < right){
        int sum = book[left] + book[right];

        if(sum == target) return "YES";
        else if (sum < target) ++left;
        else --right;
    }
    return "NO";
}
