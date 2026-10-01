#include <iostream>

using namespace std;

void arrange(int N, int arr[]) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int N;
    cin >> N;
    int arr[100];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    arrange(N, arr);
}