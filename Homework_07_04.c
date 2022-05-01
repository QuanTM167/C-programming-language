#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0;
    do
    {
        printf("Nhap so nguyen 10 < n < 100: ");
        scanf("%d", &n);
    } while (n >= 100 || n < 10);
    for (i = 1; i <= n; i += 1)
    {
        sum = sum + i;
    }
    printf("Tong ca so tu 1 den n la : %d", sum);
}
