#include <stdio.h>
int main()
{
    int L, B, area;
    printf("length of rectangle: ");
    scanf("%d", &L);

    printf("breadth of rectangle: ");
    scanf("%d", &B);

    area = L * B;

    printf("area of given rectangle is: %d\n", area);
    return 0;
}
