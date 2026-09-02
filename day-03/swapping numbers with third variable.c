#include <stdio.h>
int main()
{
    int a, b, c;
    printf("provide value of a & b: ");
    scanf("%d %d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("value of a & b are: %d %d\n", a, b);
    return 0;
}



























