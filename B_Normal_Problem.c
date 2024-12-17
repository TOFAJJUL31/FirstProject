#include <stdio.h>
#include <stdlib.h>


int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char w[100];
        scanf("%s", w);
        strrev(w);
        for (int i = 0; w[i] != '\0'; i++) { 
            if (w[i] == 'p') {
                printf("q");
            } else if (w[i] == 'q') {
                printf("p");
            } else {
                printf("%c", w[i]); 
            }
        }
        printf("\n"); 
    }
    return 0;
}