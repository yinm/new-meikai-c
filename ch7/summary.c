#include <stdio.h>

int main(void)
{
    int i, no;
    float value;
    float sum = 0.0f;

    puts("浮動小数点を何度も加算します。");
    printf("値:");
    scanf("%f", &value);
    printf("回数:");
    scanf("%d", &no);

    for (i = 0; i < no; i++) {
        sum += value;
    }
    printf("加算結果は%fです。\n", sum);

    return 0;
}