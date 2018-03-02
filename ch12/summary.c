// 3rd
#include <stdio.h>

#define NAME_LEN 128

struct Date {
    int y;
    int m;
    int d;
};

typedef struct {
    char name[NAME_LEN];
    struct Date birthday;
} Human;

void print_Human(const Human *h)
{
    printf(
        "%s (%04d年%02d月%02d日生まれ)\n",
        h->name, h->birthday.y, h->birthday.m, h->birthday.d
    );
}

int main(void)
{
    int i;
    struct Date today;

    Human member[] = {
        {"a", {1904, 11, 18}},
        {"b", {1963, 11, 18}},
        {"c", {1980, 11, 18}},
    };

    printf("今日の日付を入力してください\n");
    printf("年: ");
    scanf("%d", &today.y);
    printf("月: ");
    scanf("%d", &today.m);
    printf("日: ");
    scanf("%d", &today.d);

    printf("今日は%d年%d月%d日ですね。\n", today.y, today.m, today.d);

    printf("--- 会員一覧表 ---\n");
    for (i = 0; i < sizeof(member) / sizeof(member[0]); i++) {
        print_Human(&member[i]);
    }

    return 0;
}