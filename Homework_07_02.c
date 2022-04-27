#include <stdio.h>
int main()
{
    int n, i;
    int tich = 1;
    do
    {
        printf("Nhap so nguyen duong n <= 15: ");
        scanf("%d", &n);
    } while (n > 15 || n < 0);
    for (i = 2; i < n; i += 2)
    {
        tich = tich * i;
    }
    printf("Tich cac so nho hon n la %d", tich);
}
