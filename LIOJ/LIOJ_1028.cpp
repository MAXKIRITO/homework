#include <iostream>
using namespace std;

int main() {
    int year, month, day;
    cin >> year >> month >> day;
    int num = year + month + day;
    while (num >= 10) {
        int tmp = 0;
        while (num) {
            tmp += num % 10;
            num /= 10;
        }
        num = tmp;
    }
    cout << num << endl;
    return 0;
}