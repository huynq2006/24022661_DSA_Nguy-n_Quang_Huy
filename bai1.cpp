#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[100];
    int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
    } 
    cout << sum;
}