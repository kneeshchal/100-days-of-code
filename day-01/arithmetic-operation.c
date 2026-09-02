#include <stdio.h>
int main ()
{
    int a, b, sum, difference, product, quotient;
    printf("provide first number: ");
    scanf("%d", &a);
    printf("provide second number: ");
    scanf("%d", &b);
    sum = a + b;
    printf("sum of the two number is: %d\n", sum);
    difference = a - b;
    printf("difference of two number is: %d\n", difference);
    product = a * b;
    printf("product of two number is: %d\n", product);
    if (b == 0)
    {
        printf("Division is not possible because the second number is 0.\n");
    }
    else
    {
        quotient = a / b;
        printf("Quotient of the two numbers is: %d\n", quotient);
    }
    return 0;
}
