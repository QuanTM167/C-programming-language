#include <stdio.h>
int main()
{
    int n, i, count = 0;
    float tong_diem = 0, a, dtb;
    do
    {
        printf("So hoc sinh trong lop : ");
        scanf("%d", &n);
    } while (n <= 10);
    for (i = 1; i <= n; i++)
    {
        printf("Nhap diem toan %d : ", i);
        scanf("%f", &a);
        tong_diem = tong_diem + a;
        if (a < 5)
        {
            count++;
        }
    }
    dtb = tong_diem / n;
    printf("Diem trung binh cua ca lop: %f\n", dtb);
    printf("So hoc sinh truot mon Toan la : %d", count);
    return 0;
}
