#include<stdio.h>
int main()
{
    int n, i;
    float numerator, denominator, sum = 1;
    numerator = 3;
    denominator = 4;

    printf("enter number: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++){
            sum = sum + (numerator / denominator);
        numerator += 2;
        denominator += 2;

    }
    printf("required sum is: %.2f", sum);
    return 0;
}
