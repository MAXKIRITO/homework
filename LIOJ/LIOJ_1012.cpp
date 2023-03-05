#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int max_price = max(a, b) * 2;
    int loss = max_price - a - b;
    cout << max_price << endl << loss << endl;
    return 0;
}