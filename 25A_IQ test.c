#include <stdio.h>

int main() {
    int n, x, evenCount = 0, lastOdd = -1, lastEven = -1;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            evenCount++;
            lastEven = i;
        } else {
            evenCount--;
            lastOdd = i;
        }
    }

    printf("%d\n", (evenCount > 0 ? lastOdd : lastEven));

    return 0;
}
