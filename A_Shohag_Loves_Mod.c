#include<stdio.h>
int main(){
    int t;scanf("%d",&t);
    while (t--)
    {
        int a;
        scanf("%d",&a);
        for (int  i = 0; i < a; i++)
        {
            printf("%d ",2*i+1);
        }
        printf("\n");
    }
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a); 
}

int main() {
    int t;
    scanf("%d", &t);  
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);  
        int arr[n];  
       
        for (int i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }

        
        qsort(arr, n, sizeof(int), compare);

        
        for (int i = 0; i < n; ++i) {
            if (k >= arr[i]) {
                k -= arr[i];  
            } else {
                break; 
            }

            
            if (k == 0) {
                printf("0\n");
                break;
            }
        }

        
        if (k != 0) {
            printf("%d\n", k);
        }
    }
    return 0;
}