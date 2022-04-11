//Lập chương trình để tính các tổng sau S1 = 1+x+x^2+x^3 + ... + x^n
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float s,x;
    s = 1;
    printf("Nhap x : ");
    scanf("%f", &x);
    printf("Nhap n : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        s = s + pow(x,i);
    }
    printf("Tong la s = %f",s);
    return 0;
}
