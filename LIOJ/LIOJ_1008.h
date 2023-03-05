#include <stdio.h>

int main() {
    long long m;
    scanf("%lld", &m);

    int ans = 0;
    while (m > 0) {
        ans++;
        m -= m & -m;
    }

    printf("%d\n", ans);
    return 0;
}