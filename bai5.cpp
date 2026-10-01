#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 0) return 0;

    vector<double> a(n);
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    double avg = sum / n;
    for (int i = 0; i < n; ++i) {
        if (a[i] >= avg) {
            cout << a[i] << " ";
        }
    }
    return 0;
}