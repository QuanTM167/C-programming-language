#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, A, B, C, D;
    printf("x = ");
    scanf("%f", &x);
    printf("y = ");
    scanf("%f", &y);
    A = pow((x + y), 2);
    B = pow((x - y), 2);
    C = x * y;
    D = (A - B) / C;
    printf("A = %f, B = %f, C = %f, D = %f\n", A, B, C, D);
    printf("pow((x + y),2) - pow((x - y), 2) == 4*x*y : %d\n", pow((x + y), 2) - pow((x - y), 2) == 4 * x * y);
    return 0;
}
