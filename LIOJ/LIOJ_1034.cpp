#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    for (char& c : S) {
        c = ((c - 'a' + N) % 26) + 'a';
    }
    cout << S << endl;
    return 0;
}