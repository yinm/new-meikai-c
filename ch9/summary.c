#include <stdio.h>

#define STR_LENGTH 128

 void put_string_rep(const char s[])
 {
     int i = 0;

     while (s[i]) {
         putchar(s[i++]);
     }

     printf("  { ");

     i = 0;
     while (s[i]) {
         printf("'");
         putchar(s[i++]);
         printf("' ");
     }

     printf("'\\0' }\n");
 }

 int main(void)
 {
     int i;
     char s[STR_LENGTH];
     char ss[5][STR_LENGTH];

     printf("文字列s:");
     scanf("%s", s);

     printf("文字列を5個入力してください。\n");
     for (i = 0; i < 5; i++) {
         printf("ss[%d]: ", i);
         scanf("%s", ss[i]);
     }

     printf("文字列s: ");
     put_string_rep(s);

     printf("文字列の配列ss\n");
     for (i = 0; i < 5; i++) {
         printf("ss[%d]: ", i);
         put_string_rep(ss[i]);
     }

     return 0;
 }