// #define _CRT_SECURE_NO_WARNING
#include <stdio.h>

// int main(void)
// {
//     FILE * fp = NULL;

//     fp = fopen("memo.txt", "w");

//     return 0;
// }

// int main(void)
// {
//     FILE * fp1 = NULL;
//     FILE * fp2 = NULL;

//     fp1 = fopen("memo1.txt", "w");
//     fp2 = fopen("memo2.txt", "w");

//     return 0;
// }

// int main(void)
// {
//     FILE * fp = NULL;

//     fp = fopen("memo.txt", "w");

//     fclose(fp);

//     return 0;
// }

// int main(void)
// {
//     FILE * fp = NULL;
//     errno_t no;

//     no = fopen_s(&fp, "memo.txt", "w");
//     if (no != 0)
//     {
//         printf("ERR(%d):オープン失敗", no);
//     }

//     fclose(fp);

//     return 0;
// }

// int main(void)
// {
//     FILE * fp = NULL;

//     fp = fopen("Hello.text", "r");

//     if (fp == NULL)
//     {
//         printf("失敗");
//     }
//     else
//     {
//         printf("成功");
//         fclose(fp);
//     }

//     return 0;
// }

// int main(void)
// {
//     FILE * fp = NULL;

//     fopen_s(&fp, "memo.txt", "w");

//     fclose(fp);

//     return 0;
// }

// int main(void)
// {
//     FILE * fp = NULL;

//     fopen_s(&fp, "Hello.txt", "w");

//     fputc('H', fp);
//     fputc('E', fp);
//     fputc('L', fp);
//     fputc('L', fp);
//     fputc('O', fp);
//     fputc('\n', fp);

//     fclose(fp);

//     return 0;
// }

// int main(void)
// {
//     FILE * fp = NULL;
//     fopen_s(&fp, "Hello.txt", "w");

//     fputs("Hello\n", fp);

//     fclose(fp);

//     return 0;
// }
