#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, X, Y, Z;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    X = pow(a, 3) + pow(b, 3);
    Y = pow((a + b), 3);
    Z = a * b * (a + b);
    printf("X = %f, Y = %f, Z = %f\n", X, Y, Z);
    printf("Y - 3Z == X: %d", Y - 3 * Z == X); //=1 ==> true
}
