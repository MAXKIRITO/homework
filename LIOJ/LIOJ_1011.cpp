#include <iostream>
using namespace std;

int main() {
    int m, sum = 0;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int h;
        cin >> h;
        sum += h;
    }
    if (sum / m >= 183) cout << "real" << endl;
    else cout << "fake" << endl;
    return 0;
}