#include <stdio.h>
#include <math.h>
int main()
{
    float epsilon;
    float a;
    do
    {
        printf("Enter your epsilon number: ");
        scanf("%f", &epsilon);
    } while (epsilon <= 0 || epsilon >= 1);

    a = (floor((1 - epsilon) / (2 * epsilon))) + 1;
    int n = a;
    printf("Gia tri nguyen nho nhat cua n de phân số 1/(2*n+1) < epsilon la %d", n);
}
