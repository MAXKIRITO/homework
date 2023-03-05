#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // output spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // output stars
        for (int j = 1; j <= i * 2 - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}