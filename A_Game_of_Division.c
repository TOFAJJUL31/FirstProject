#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
    
    int n, k;
    scanf("%d %d", &n, &k);

    int v[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; i++) {
        int is_valid = 1;
        for (int j = 0; j < n; j++) {
            if (i != j && abs(v[i] - v[j]) % k == 0) {
                is_valid = 0;
                break;
            }
        }
        if (is_valid) {
            printf("YES\n%d\n", i + 1);
            
        }
    }

    printf("NO\n");
    }
    return 0;
}