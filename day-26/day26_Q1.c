#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i < 6; i++){
        for(j = 1; j <= i - 1; j++){
            printf("
                   ");
        }
        for(j = 6 - i; j <= 5; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
