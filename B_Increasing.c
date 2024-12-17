#include <stdio.h>
#include <stdlib.h>

// int comp(const void* a, const void* b) {
//     int int_a = (const int)a;
//     int int_b = (const int)b;

//     return int_a - int_b;
// }

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n); 
        int arr[n],found=0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            for (int  j=0; j <i; j++)
            {
                if (arr[j]==arr[i])
                {
                    found=1;
                }
                
            }
        }
        if (found==1)
        {
            printf("NO\n");
        }
        else
        printf("YES\n");
        
    }
       

    return 0;
}