#include <iostream>
using namespace std;

int main() {
    int target, N;
    cin >> target >> N;
    int nums[N], count = 0;

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
        if (nums[i] != target) {
            count++;
        }
    }

    for (int i = 0; i < N; i++) {
        if (nums[i] != target) {
            cout << nums[i] << endl;
            count--;
        }
        if (count == 0) {
            break;
        }
    }

    return 0;
}