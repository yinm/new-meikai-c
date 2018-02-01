#include <stdio.h>

double ave2(int a, int b)
{
    return (double)(a + b) / 2;
}

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力してください。");
    printf("整数1: ");
    scanf("%d", &n1);
    printf("整数2: ");
    scanf("%d", &n2);

    printf("平均値は%.1fです。\n", ave2(n1, n2));

    return 0;
}