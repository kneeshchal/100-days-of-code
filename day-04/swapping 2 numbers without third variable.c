#include <stdio.h>
int main()
{
    int a, b;
    printf("value of a & b: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("value of a & b: %d %d", a, b);
    return 0;


}
