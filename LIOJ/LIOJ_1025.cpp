#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        int sum = 0;
        int temp = i;
        int len = to_string(i).length(); // 获取 i 的位数
        while (temp > 0) {
            sum += pow(temp % 10, len);
            temp /= 10;
        }
        if (sum == i) cout << i << endl; // 判断是否为水仙花数并输出
    }
    return 0;
}