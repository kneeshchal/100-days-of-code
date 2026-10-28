#include<stdio.h>
int Pivot(int n){
    for(int x = 1; x <= n; x++){
int leftSum = 0;
for(int i = 1; i <= x; i++){
    leftSum = leftSum + i;
}
int rightSum = 0;
for(int j = x; j <= n; j++){
    rightSum = rightSum + j;
}
  if(leftSum == rightSum){
    return x;
  }

    }
    return -1;
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int ans = Pivot(n);
    printf("pivot point of %d is %d", n, ans);
    return 0;
}
