#include <stdio.h>
#define MAX_L1 145
#define MAX_L2_ONLY 55
#define MAX_L3_ONLY 800
void solve() {
    long long N, M, K;
    if (scanf("%lld %lld %lld", &N, &M, &K) != 3) {
        return;
    }
    if (N <= MAX_L1 && M <= MAX_L2_ONLY && K <= MAX_L3_ONLY) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
int main() {
    int t;
    if (scanf("%d", &t) != 1) {
        return 1;
    }
    while (t--) {
        solve();
    }
    return 0;
}
