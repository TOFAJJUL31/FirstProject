#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

       
        long long row1 = (a < m) ? a : m; 
        long long row2 = (b < m) ? b : m; 

        
        long long s = (2 * m) - (row1 + row2);

        long long max= row1 + row2 + ((c < s) ? c : s);

        printf("%lld\n", max);
    }

    return 0;
}
