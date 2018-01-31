#include <stdio.h>

void put_stars(int n)
{
    while (n-- > 0) {
        putchar('*');
    }
}

int main(void)
{
    int i, len;

    puts("左下直角二等辺三角形を作ります。");
    printf("短辺:");
    scanf("%d", &len);

    for (i = 1; i <= len; i++) {
        put_stars(i);
        putchar('\n');
    }

    return 0;
}