#include<stdio.h>
int main()
{
    int i, n, sum = 0, odd = 1;

    printf("enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i ++){

            sum = sum + odd;
    odd = odd + 2;
    }
    printf("sum of odd numbers is %d", sum);
    return 0;
}
