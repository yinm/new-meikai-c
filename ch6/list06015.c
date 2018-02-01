#include <stdio.h>

#define NUMBER 5
#define FAILED -1

int search(int v[], int key, int n)
{
    int i;

    v[n] = key;

    for (i = 0; v[i] != key; i++) {
        ;
    }

    return (i < n) ? i : FAILED;
}

int main(void)
{
    int i, ky, idx;
    int vx[NUMBER + 1];

    for (i = 0; i < NUMBER; i++) {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }
    printf("探す値:");
    scanf("%d", &ky);

    if ((idx = search(vx, ky, NUMBER)) == FAILED) {
        puts("\a探索に失敗しました。");
    } else {
        printf("%dは%d番目にあります。\n", ky, idx + 1);
    }

    return 0;
}