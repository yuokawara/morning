#include <stdio.h>

#include <stdlib.h>

// enum
// {
//     E_MUSIC_A,
//     E_MUSIC_B,
// };

// void music(int musicKind)
// {
//     char * pMusic = NULL;
//     size_t musicSize = 0;

//     if(musicKind == E_MUSIC_A)
//     {
//         musicSize = 1024 * 1024;
//     }
//     else
//     {
//         musicSize = 5 * 1024 * 1024;
//     }

//     // サイズ分のメモリ確保
//     pMusic = (char *)malloc(musicSize);

//     // 使用後不要なメモリは開放
//     free(pMusic);
//     pMusic = NULL;

//     return;
// }

// int main(void)
// {
//     // 再生
//     music(E_MUSIC_A);

//     return 0;
// }

// #define D_ARRAY (1000)

// int main(void)
// {
//     long * pArray = NULL;
//     int i;

//     pArray = (long *)malloc(sizeof(long) * D_ARRAY);
//     if (pArray == NULL)
//     {
//         printf("error");
//         return 0;
//     }

//     for (i = 0; i < D_ARRAY; i++)
//     {
//         pArray[i] = i;
//     }

//     for (i = D_ARRAY - 10; i < D_ARRAY; i++)
//     {
//         printf("[%d] = %d\n", i, pArray[i]);
//     }

//     free(pArray);
//     pArray = NULL;

//     return 0;
// }

// int main(void)
// {
//     char moji[] = "hello";
//     char * pmoji = "world";

//     printf("%s\n", moji);
//     printf("%s\n", pmoji);

//     return 0;
// }

// #include <string.h>

// int countChartacter(char * str, char moji)
// {
//     int count = 0;
//     size_t i;

//     if (str == NULL)
//     {
//         return -1;
//     }

//     for (i = 0; i < strlen(str); i++)
//     {
//         if(str[i] == moji)
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int main(void)
// {
//     char sentence[] = "I'm studying programming at a manufacturing C language school.";
//     char moji;
//     int count;

//     moji = 'a';
//     count = countChartacter(sentence, moji);
//     printf("文字：%c 個数：%d\n", moji, count);

//     moji = 'm';
//     count = countChartacter(sentence, moji);
//     printf("文字：%c 個数：%d\n", moji, count);

//     return 0;
// }

// #include <string.h>

// int toUpper (char * str) {
//     size_t i;

//     if (str == NULL)
//     {
//         return -1;
//     }

//     for (i = 0; i < strlen(str); i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] -= 'a' - 'A';
//         }
//     }

//     return 0;
// }

// int main(void)
// {
//     char moji[] = "Hello World";

//     toUpper(moji);

//     printf("%s\n", moji);

//     return 0;
// }

// #include <string.h>

// int reverse (char * str)
// {
//     // if (str == NULL)
//     // {
//     //     return -1;
//     // }
//     char * pEnd = str;
//     char tmp;
//     size_t i;

//     for (i = 0; i < strlen(str) -1; i++)
//     {
//         pEnd++;
//     }

//     while (str < pEnd)
//     {
//         tmp = *str;
//         *str = *pEnd;
//         *pEnd = tmp;

//         str++;
//         pEnd--;
//     }
//     return 0;
// }

// int main(void)
// {
//     char moji[] = "Good Morning";
//     reverse(moji);
//     printf("%s\n", moji);

//     return 0;
// }