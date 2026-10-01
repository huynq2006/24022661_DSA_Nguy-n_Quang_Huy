#include <iostream>
#include <vector>

using namespace std;

long long tongMaTran(const vector<vector<int>>& mat) {
    long long sum = 0;
    int n = mat.size();
    if (n == 0) return 0;
    int m = mat[0].size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            sum += mat[i][j];
        }
    }
    return sum;
}

void xoaDong(vector<vector<int>>& mat, int i) {
    int n = mat.size();
    if (i < 0 || i >= n) return;
    for (int row = i; row < n - 1; ++row) {
        mat[row] = std::move(mat[row + 1]);
    }
    mat.pop_back();
}

