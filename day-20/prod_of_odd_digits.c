#include<stdio.h>
int main()
{
    int n, remainder, prod = 1;
    printf("provide number: ");
    scanf("%d", &n);

    while(n > 0){
        remainder = n % 10;
        if(remainder % 2 != 0){
            prod = prod * remainder;
        }
        n = n / 10;
    }
    printf("product of odd digits is %d", prod);
    return 0;
}
