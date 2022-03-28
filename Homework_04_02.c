#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, A, B, C;
    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter y: ");
    scanf("%f", &y);
    A = pow((x + y), 2);
    B = pow((x - y), 2);
    C = pow(x, 2) + pow(y, 2);
    printf("A = %f, B = %f, C = %f\n", A, B, C);
    printf("A + B = 2C :%d", A + B == 2 * C); //= 1 ==> True
    return 0;
}
