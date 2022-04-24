#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("a, b, c la do dai ba canh tam giac\n");
        if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2) || pow(c, 2) + pow(a, 2) == pow(b, 2))
        {
            printf("Tam giac abc la tam giac vuong");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Tam giac abc la tam giac can");
        }
        else if (a == b && b == c && c == a)
        {
            printf("Tam giac la tam giac deu");
        }
    }
}
