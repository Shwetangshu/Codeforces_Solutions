    #include<stdio.h>
    #include<math.h>
     
    int main() {
        int t;
        scanf("%d", &t);
        
        while (t--) {
            double n;
            long long int ans = 0;
            scanf("%lf", &n);
            ans = ceil((n / 2) - 1);
            printf("%lld\n", ans);
        }
        
        return 0;
    }
