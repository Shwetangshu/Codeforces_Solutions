 #include <stdio.h>
    #include <string.h>
     
    int main() {
        int n, goal = 0;
        scanf("%d", &n);
     
        char team[20], win[20];
        while (n--) {
            if (goal != 0) {
                scanf("%s", team);
                if (strcmp(team, win) == 0) {
                    goal += 1;
                } else {
                    goal -= 1;
                }
            } else {
                scanf("%s", win);
                goal = 1;
            }
        }
        printf("%s\n", win);
        return 0;
    }
