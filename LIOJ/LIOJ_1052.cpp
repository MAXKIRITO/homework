#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> dp(w+1);
    for (int i = 0; i < n; i++) {
        int weight, value;
        cin >> weight >> value;
        for (int j = w; j >= weight; j--) {
            dp[j] = max(dp[j], dp[j-weight]+value);
        }
    }
    cout << dp[w] << endl;
    return 0;
}