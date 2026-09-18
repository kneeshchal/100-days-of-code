#include<stdio.h>
int main()
{
    int n, i, j;

    printf("enter number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++){
           int prime = 1;
            for(j = 2; j < i; j++){
                if(i % j == 0){
                    prime = 0;
                }

            }
            if(prime == 1){
        printf("%d ", i);
    }

    }

    return 0;
}
