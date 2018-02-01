#include <stdio.h>

int val(int no)
{
    static int v;
    int temp = v;

    v = no;
    return temp;
}

int main(void)
{
    int retry;

    do {
        int n;

        printf("記憶させる値: ");
        scanf("%d", &n);
        printf("記憶させました。ちなみに前回は%dでした。\n", val(n));

        printf("もう一度? Yes:0 No:9 :");
        scanf("%d", &retry);
    } while (retry == 0);

    return 0;
}