#include <stdio.h>
int main()
{
    int n, i;

    int sum = 0;
   printf("give a natural number: ");
   scanf("%d", &n);

    for(i = 1; i <=n; i = i + 1)
    {
        sum = sum + i;
    }

    printf("sum of n natural no is: %d\n", sum);
    return 0;
}
