// 2nd
#include <stdio.h>

int main(void)
{
    int a = 178;
    int b = 175;
    int c = 179;

    int *isako, *hiroko;

    isako = &a;
    hiroko = &c;

    printf("isako: %d\n", *isako);
    printf("hiroko: %d\n", *hiroko);

    isako = &b;
    *hiroko = 180;

    putchar('\n');
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("isako: %d\n", *isako);
    printf("hiroko: %d\n", *hiroko);

    return 0;
}