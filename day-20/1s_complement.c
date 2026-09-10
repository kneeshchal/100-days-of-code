#include<stdio.h>
int main()
{
    int n, remainder, complement = 0, place = 1;
    printf("provide binary number: ");
    scanf("%d", &n);

    while(n >0){
        remainder = n % 10;


        if(remainder == 1){
            remainder = 0;
        }
        else{
            remainder = 1;
        }
         complement = complement + (remainder * place);
        place = place * 10;
        n = n / 10;
    }
    printf("1s complement of given binary is %d", complement);
    return 0;

}
