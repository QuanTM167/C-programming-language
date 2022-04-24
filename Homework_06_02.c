#include <stdio.h>
int main()
{
    int n;
    printf("Enter your age : ");
    scanf("%d", &n);
    if (0 <= n && n < 6)
    {
        printf("Tuoi thieu nhi");
    }
    else if (n <= 6 && n < 12)
    {
        printf("Tuoi thieu nien");
    }
    else if (n <= 12 && n < 19)
    {
        printf("Tuoi thanh thieu nien");
    }
    else if (n <= 19 && n < 35)
    {
        printf("Tuoi thanh nien");
    }
    else if (n >= 35 && n < 60)
    {
        printf("Tuoi trung nien");
    }
    else if (n > 60)
    {
        printf("Tuoi cao nien");
    }
}
