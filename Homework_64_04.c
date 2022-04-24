// Số nguyên tố là một số nguyên dương chỉ chia hết cho 1 và chính nó. Lập chương trình nhập một số nguyên n từ bàn phím, kiểm tra xem một số nguyên n có phải là số nguyên tố không và thông báo ra màn hình.
#include <stdio.h>
int main()
{
    int n;
    int i;
    int count = 0;
    printf("Enter n = ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("n is not a prime number.\n");
    }
    else
    {
        for (i = 2; i <= n-1; i++)
        {
            if(n % i == 0){
                count++;
                break;
            }
        }
        if(count == 0){
            printf("%d is a prime number", n);
        } else {
            printf("%d is not a prime number", n);
        }
    }
    return 0;
}
