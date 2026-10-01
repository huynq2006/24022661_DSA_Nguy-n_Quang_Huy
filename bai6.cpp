#include <iostream>
#include <vector>

using namespace std;

void xoaPhanTu(vector<int>& arr, int k) {
    int n = arr.size();
    if (k < 0 || k >= n) return;
    for (int i = k; i < n - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr.pop_back();
}

void chenPhanTu(vector<int>& arr, int m, int y) {
    int n = arr.size();
    if (m < 0 || m > n) return;
    arr.push_back(0); 
    for (int i = n; i > m; i--) {
        arr[i] = arr[i - 1];
    }
    arr[m] = y;
}

