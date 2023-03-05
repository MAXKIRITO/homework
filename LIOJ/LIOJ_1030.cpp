#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool is_palindrome = true;
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            is_palindrome = false;
            break;
        }
    }
    if (is_palindrome) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}