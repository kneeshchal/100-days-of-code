#include<stdio.h>
#include<math.h>
int main()
{
double a, b, c, D, root1, root2, real, imag;
printf("enter coeffcients a, b, c: ");
scanf("%lf %lf %lf", &a, &b, &c);
if(a == 0) {
    printf("invalid input, a cannot be zero \n");
    return 0;
}
D = b*b - 4*a*c;
if(D > 0){
    root1 = (-b + sqrt(D)) / (2*a);
    root2 = (-b - sqrt(D)) / (2*a);
    printf("two real and distinct roots:\n");
    printf("root1 = %.2lf, root2 = %.2lf\n", root1, root2);

}
else if(D == 0){
    root1 = root2 = -b / (2*a);
    printf("two real and equal roots:\n");
    printf("root1 = root2 = %.2lf\n", root1);

}
else{
    real = -b / (2*a);
    imag = sqrt(-D) / (2*a);
    printf("two imaginary roots:\n");
    printf("root1 = %.2lf + %.2lfi\n", real, imag);
    printf("root2 = %.2lf - %.2lfi\n", real, imag);

}
return 0;

}
