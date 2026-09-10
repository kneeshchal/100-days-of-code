#include<stdio.h>
int main()
{
    int n, original, remainder, sum = 0;

    printf("provide number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0){
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }

    if(sum == original){
        printf("number is an armstrong number");
    }
    else{
        printf("number is not an armstrong number");
    }
    return 0;

}
