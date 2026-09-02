#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("provide first number: ");
    scanf("%d", &a);

    printf("provide second number: ");
    scanf("%d", &b);

    sum = a + b;
    printf("the sum of given number is: %d\n", sum);
    return 0;
}
