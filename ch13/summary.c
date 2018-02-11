#include <stdio.h>

int main(void)
{
    int ch;
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("書き込み先ファイル名:");
    scanf("%s\n", fname);

    if ((fp = fopen(fname, "w")) == NULL) {
        printf("\a書き込み先ファイルをオープンできません。\n");
    } else {
        while ((ch = fgetc(stdin)) != EOF) {
            fputc(ch, fp);
        }
        fclose(fp);
    }

    return 0;
}