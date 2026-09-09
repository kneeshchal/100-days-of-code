#include <stdio.h>
int main (){
int N, i, prod;
scanf("%d", &N);
prod = 1;

if(N < 0){
    printf("invalid input");
}
else{
for (i = 1; i <=N; ++i){
    prod = prod * i;
}
    printf("Factorial = %d\n", prod);
}
    return 0;
}
