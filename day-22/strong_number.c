#include<stdio.h>
int main()
{
    int n, j, original,remainder, fact = 1, sum = 0;
    printf("enter number: ");
    scanf("%d", &n);
    original = n;
    while(n > 0){
           remainder = n % 10;
           for(j = 1; j <= remainder; j++){
        fact = fact * j;
           }
           sum = sum + fact;
           fact = 1;
        n = n / 10;

    }
    if(original == sum){
        printf("number is a strong number");
    }
    else{
        printf("number is not a strong number");
    }
    return 0;

}
