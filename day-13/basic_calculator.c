#include<stdio.h>
int main()
{
    int a, b, c, operation;

    printf("values of a and b: ");
    scanf("%d %d", &a, &b);
    printf("\nChoose an operation:\n");
printf("1. Addition (+)\n");
printf("2. Subtraction (-)\n");
printf("3. Multiplication (*)\n");
printf("4. Division (/)\n");
printf("5. Modulus (%%)\n");


    printf("operation s.no 1-5: ");
    scanf("%d", &operation);

    switch(operation)
    {
    case 1:
        c = a + b;
        printf("result of operation is %d", c);
        break;
    case 2:
        c = a - b;
        printf("result of operation is %d", c);
        break;
    case 3:
        c = a * b;
        printf("result of operation is %d", c);
        break;
    case 4:

    if(b == 0) {
        printf("Invalid input");
    }
    else {
        c = a / b;
        printf("result of operation is %d", c);
    }

        break;
    case 5:

    if(b == 0) {
        printf("Invalid input");
    }
    else {
        c = a % b;
        printf("result of operation is %d", c);
    }
    break;
    default:
        printf("invalid operation");

    }

    return 0;

}
