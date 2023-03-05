#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n;
    cin >> str >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        cout << num;
        if (i != n-1) { // 最後一個元素後面不插入 str
            cout << str;
        }
    }
    cout << endl;
    return 0;
}