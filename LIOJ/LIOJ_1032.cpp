#include <iostream>
#include <cmath>
#include <iomanip> // 輸出固定小數位數需要引入這個標頭文件

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        double distance = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2)); // 計算距離
        cout << fixed << setprecision(2) << distance << endl; // 輸出並固定小數點後兩位
    }

    return 0;
}