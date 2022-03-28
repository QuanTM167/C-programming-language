#include<stdio.h>
#include<math.h>

int main()
{
    float x, y, F;
    printf("Enter number: "); scanf("%f", &x);
    printf("Enter number: "); scanf("%f", &y);
    F = pow(y,6) + x * pow(y,5) +  pow(x,2) * pow(y,4) + pow(x,3) * pow(y,3) + pow(x,4) * pow(y,2) + pow(x,5) * y + pow(x,6);
    printf(" F = %f \n", F);
    return 0;
}
