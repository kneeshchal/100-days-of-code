#include<stdio.h>
int main()
{
    int P, R ,T;
    float SI;

    printf("provide principle value: ");
    scanf("%d", &P);

    printf("provide rate of interest: ");
    scanf("%d", &R);

    printf("provide time: ");
    scanf("%d", &T);

    //simple interest = SI

    SI = (P * R * T)/100;

    printf("Simple Interest: %.2f", SI);
    return 0;
}
