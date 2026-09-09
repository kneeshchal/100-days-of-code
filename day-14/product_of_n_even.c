#include<stdio.h>
int main()
{
    int i, n, prod = 1;

    printf("enter value of n: ");
    scanf("%d", &n);

    for(i =2; i <= n; i += 2)
    {
        prod = prod * i;

    }
    printf("required product is %d", prod);
    return 0;
}
