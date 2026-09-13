#include<stdio.h>
int main()
{
    int n, i;
    float numerator, denominator, sum = 0;
    numerator = 2;
    denominator = 3;

    printf("enter number: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++){
            sum = sum + (numerator / denominator);
        numerator += 2;
        denominator += 4;

    }
    printf("required sum is: %.2f", sum);
    return 0;
}

