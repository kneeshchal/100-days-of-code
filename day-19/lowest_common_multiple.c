#include<stdio.h>
int main()
{
    int a, b, i, lcm;
    printf("provide two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b){
        for(i = a; ; i++){
            if(i % a == 0 && i % b == 0){
                lcm = i;
                break;
            }

        }
        printf("lowest common multiple is %d", lcm);

    }
    else{
        for(i = b; ; i++){
            if(i % a == 0 && i % b == 0){
                lcm = i;
                break;
            }
        }
        printf("lowest common multiple is %d", lcm);
    }
    return 0;
}
