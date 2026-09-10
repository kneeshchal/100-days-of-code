#include<stdio.h>
int main()
{
    int n, i, remainder, sum = 0;

    printf("provide number: ");
    scanf("%d", &n);

while(n > 0){
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    printf("sum of all digits is %d", sum);
    return 0;
}
