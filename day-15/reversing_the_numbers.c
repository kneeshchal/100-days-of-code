#include<stdio.h>
int main()
{
    int n, remainder, sum = 0;
    printf("enter number: ");
    scanf("%d", &n);

    while(n > 0){
        remainder = n % 10;
        sum = (sum * 10) + remainder;
        n = n / 10;

    }
    printf("reverse of given number is %d", sum);
    return 0;

}
