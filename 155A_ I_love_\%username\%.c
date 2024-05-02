#include <stdio.h>
 
int count_amazing_performances(int n, int points[]) {
    if (n <= 1) {
        return 0;
    }
 
    int amazing_count = 0;
    int min_points = points[0];
    int max_points = points[0];
 
    for (int i = 1; i < n; i++) {
        if (points[i] > max_points) {
            max_points = points[i];
            amazing_count++;
        } else if (points[i] < min_points) {
            min_points = points[i];
            amazing_count++;
        }
    }
 
    return amazing_count;
}
 
int main() {
    int n;
    scanf("%d", &n);
 
    int points[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &points[i]);
    }
 
    int result = count_amazing_performances(n, points);
    printf("%d\n", result);
 
    return 0;
}
