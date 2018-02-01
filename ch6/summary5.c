#include <stdio.h>

#define NUMBER 5

void cpy_ary(int a[], const int b[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        a[i] = b[i];
    }
}

int main(void)
{
    int i;
    int v1[NUMBER];
    int v2[NUMBER];

    for (i = 0; i < NUMBER; i++) {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    cpy_ary(v2, v1, NUMBER);

    puts("配列v1の全要素をv2にコピーしました。\n");
    for (i = 0; i < NUMBER; i++) {
        printf("v2[%d]:%d\n", i, v2[i]);
    }

    return 0;
}