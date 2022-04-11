//Lập chương trình để tính các tổng sau S1 = 1+x+x^2+x^3 + ... + x^n
// S2 = 1 - x + x^2 - x^3 + ... + (-1)^n.x^n
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float s1,s2,x;
    s1 = 1;
    s2 = 1;
    printf("Nhap x : ");
    scanf("%f", &x);
    printf("Nhap n : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        s1 = s1 + pow(x,i);
        s2 = s2 + pow(-x,i);
    }
    printf("s1 = %f\n",s1);
    printf("s2 = %f",s2);
    return 0;
}
