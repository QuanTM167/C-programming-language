#include<stdio.h>

int main()
{
    int x, y, z, sum, product, average;
    printf("Enter your age: "); scanf("%i", &x);
    printf("Enter your father age: "); scanf("%i", &y);
    printf("Enter your mom age: "); scanf("%i", &z);
    sum = x + y + z;
    product = x * y * z;
    average = (x + y + z) / 3;
    printf("The sum of those ages %i \n", sum);
    printf("Product those ages %i \n", product);
    printf("The average of those ages %i \n", average);

    return 0;

}
