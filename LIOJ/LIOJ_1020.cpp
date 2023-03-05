#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    // 小於等於 1 的數不是質數
    if (n <= 1) {
        return false;
    }
    // 2 是最小的質數
    if (n == 2) {
        return true;
    }
    // 除了 2 以外，偶數都不是質數
    if (n % 2 == 0) {
        return false;
    }
    // 檢查 n 是否有比 1 和自己大的因數
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int P;
        cin >> P;
        if (is_prime(P)) {
            cout << "Prime" << endl;
        } else {
            cout << "Composite" << endl;
        }
    }

    return 0;
}