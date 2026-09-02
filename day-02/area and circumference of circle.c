#include <stdio.h>
int main()
{
    int r;
    float PI, area, circumference;
    PI = 3.14;

    printf("provide radius of circle: ");
    scanf("%d", &r);

    area = PI * r * r;
    circumference = 2 * PI * r;

    printf("area of circle is: %f\n", area);
    printf("circumference of circle is: %f\n", circumference);
    return 0;
}
