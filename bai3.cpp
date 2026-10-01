#include <iostream>

using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     int a1 = 0;
//     int a2 = 1;
//     if (N == a1) {
//         cout << "Giai thừa của N: " << 0;
//     } else if (N == a2) {
//         cout << "Giai thừa của N: " << 1;
//     } else {
//         int gt = 1;
//         for (int i = 2; i <= N; i++) {
//             gt = gt * i;
//         }
//         cout << "Giai thừa của N: " << gt;
//     }
    
// }

int giaithua(int N) {
    int prod = 1;
    if (N == 0 || N == 1) {
        return 1;
    } else {
        prod = N * giaithua(N - 1);
    }
    return prod;
}

int main() {
    int N;
    cin >> N;
    cout << giaithua(N);
}
// Time = O(N)
// Memory = O(N)



/**
 * void giaithua(int N) {
 *      if (N == 0 || N == 1) {
            return 1;
        } else {
            return N * giaithua(N - 1);
        }
 }
 */ 