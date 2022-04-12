// Nhập số nguyên n<8 bất kì. Lập chương trình tính giai thừa của n. Sử dụng vòng lặp for
#include<stdio.h>
#include<math.h>
int main(){
    int n, i, a = 1;
    printf("Nhap n < 8 : ");
    scanf("%d",&n);
    if (n < 8) {
        for(i=1;i<=n;i++)
        {
        a = a * i;
        }
        printf("Giai thua cua n = %d", a);
    } else {
        printf("n khong hop le vui long nhap lai");
    }
}
