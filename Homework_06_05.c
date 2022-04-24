#include <stdio.h>
#include <math.h>
int main()
{
    float weight, height;
    float BMI;
    BMI = pow((weight / height), 2);
    printf("Enter your weight : ");
    scanf("%f", &weight);
    printf("Enter your height : ");
    scanf("%f", &height);
    if (BMI < 18.5)
    {
        printf("Underweight");
    }
    else if (BMI >= 18.5 && BMI < 25)
    {
        printf("Normal weight");
    }
    else if (BMI >= 25 && BMI < 30)
    {
        printf(" Overweight");
    }
    else if (BMI >= 30)
    {
        printf("Obesity");
    }
}
