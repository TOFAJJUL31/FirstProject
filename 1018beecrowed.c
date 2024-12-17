#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    printf("%d\n", N);
    int r;
    printf("%d nota(s) de R$ 100,00\n", N / 100);
    r = N%100;

    printf("%d nota(s) de R$ 50,00\n", r / 50);
    r = r%50;

    printf("%d nota(s) de R$ 20,00\n", r / 20);
    r = r%20;

    printf("%d nota(s) de R$ 10,00\n", r / 10);
    r = r%10;

    printf("%d nota(s) de R$ 5,00\n", r / 5);
    r = r%5;

    printf("%d nota(s) de R$ 2,00\n", r / 2);
    r = r%2;

    printf("%d nota(s) de R$ 1,00\n", r);
    return 0;
}