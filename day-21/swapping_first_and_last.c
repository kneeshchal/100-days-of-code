#include<stdio.h>
int main()
{
    int n, temp, first, last, swapped, place = 1;
    printf("enter number: ");
    scanf("%d", &n);
    temp = n;

    last = n % 10;

    while(n >=  10){
        n = n / 10;
        place = place * 10;
    }
    first = n;

    swapped = (last * place) + (temp % place) - last + first;
    printf("swapped of the number is %d", swapped);

    return 0;

}
