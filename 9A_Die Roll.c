    #include <stdio.h>
     
    int main() {
        int Y, W;
        scanf("%d %d", &Y, &W);
     
        const char *probability[] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
        int D = (Y > W) ? Y : W;
        printf("%s\n", probability[D]);
        return 0;
    }
