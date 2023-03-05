#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ratio = a[1] / a[0];
    for (int i = 2; i < n; i++) {
        if (a[i] / a[i - 1] != ratio) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}