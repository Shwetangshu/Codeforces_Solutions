#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char str[6];
        scanf("%s", str);
        
        int count_A = 0, count_B = 0;
        for (int i = 0; i < 5; i++) {
            if (str[i] == 'A') count_A++;
            else if (str[i] == 'B') count_B++;
        }
        
        printf("%c\n", (count_A > count_B) ? 'A' : 'B');
    }
    return 0;
}
