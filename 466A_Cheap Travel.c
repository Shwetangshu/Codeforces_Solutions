#include <stdio.h>
     
    int main() {
        int n, m, a, b;
        scanf("%d %d %d %d", &n, &m, &a, &b);
     
        if (b <= a * m) {
            printf("%d\n", b * (n / m) + (b <= a * (n % m) ? b : a * (n % m)));
        } else {
            printf("%d\n", a * n);
        }
     
        return 0;
    }
