#include <stdio.h>
int main()
{
    int side1, side2, side3;

    printf("provide sides of triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

     if(side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid sides");
    }
    else if(side1 + side2 <= side3 ||
            side1 + side3 <= side2 ||
            side2 + side3 <= side1) {
        printf("The given sides cannot form a triangle");
    }

    if(side1 == side2 && side2 == side3){
        printf("equilateral triangle");
    }
    else if(side1 == side2 || side2 == side3 || side1 == side3){
        printf("isoceles triangle");
    }
    else{
        printf("scalene triangle");
    }
    return 0;
}
