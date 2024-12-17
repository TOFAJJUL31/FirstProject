// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float banlance;
    scanf("%f",&banlance);
    if (banlance>500 && banlance<=10000)
    {
        printf("Balance : %f",banlance+banlance*0.05);
    }
    else if (banlance>10000 && banlance <=15000)
    {
        printf("Balance : %f",banlance+banlance*0.15);
    }
    else
    printf("Balance : %f",banlance+banlance*0.20);
    
    
    

    return 0;
}