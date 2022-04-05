#include <stdio.h>

int main()
{
    int n;
    int tich = 1;
    int i;
    do
    {
        printf("Enter n = ");
        scanf("%d", &n);
    } while (10 >= n || n >= 100);

    printf("n = %d\n", n);
    for (i = 5; i % 5 == 0 && i < n; i += 5)
    {
        tich = tich * i;
    }
    printf("tich = %d", tich);

    return 0;
}
