#include <stdio.h>

// int main(void)
// {
//     char array[5] = {0, 1, 2, 3, 4};
//     int index = 3;

//     array[1] = 10;
//     array[index] = 30;

//     return 0;
// }

// int main(void)
// {
//     long student[5] = {50, 60, 70, 75, 80};
//     long ave = 0;
//     int i;

//     for (i = 0; i < 5; i++)
//     {
//         ave += student[i];
//     }
//     ave /= 5;

//     printf("ave : %d¥n", ave);
// }

// int main(void)
// {
//     char array1[5];
//     char array2[5] = {1, 2, 3, 4, 5};
//     char array3[5] = {1, 2, 3,};
//     char array4[5] = {1};

//     return 0;
// }

// int main(void)
// {
//     char array2D[3][5] =
//     {
//         {56, 1,45,82,29},
//         {43,99,51,71, 7},
//         {64,96,33, 0,49},
//     };

//     return 0;
// }

// int main(void)
// {
//     long num;
//     char tmp;

//     printf("%d\n", sizeof(long));
//     printf("%d\n", sizeof(num));

//     printf("%d\n", sizeof(char));
//     printf("%d\n", sizeof(tmp));

//     return 0;
// }

// int main(void)
// {
//     int num[] = {10, 3002, 529, 1920};

//     int i;
//     int max = num[0];

//     for (i = 1; i < sizeof(num)/sizeof(num[0]); i++)
//     {
//         if(max < num[i])
//         {
//             max = num[i];
//         }
//     }
//     printf("%d", max);
//     return 0;
// }

// int main(void)
// {
//     int num[9][9] = {0};
//     int i, k;

//     for (i = 0; i < 9; i++)
//     {
//         for (k = 0; k < 9; k++)
//         {
//             num[i][k] = (i + 1) * (k + 1);
//         }
//     }

//     for (i = 0; i < 9; i++)
//     {
//         for (k = 0; k < 9; k++)
//         {
//             printf("%2d", num[i][k]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(void)
// {
//     char moji;

//     moji = 'A';
//     printf("%c, 0x%x\n", moji, moji);

//     moji = 0x41;
//     printf("%c, 0x%x\n", moji, moji);

//     return 0;
// }

// int main(void)
// {
//     char moji[10];

//     moji[0] = 'H';
//     moji[1] = 'E';
//     moji[2] = 'L';
//     moji[3] = 'L';
//     moji[4] = 'O';
//     moji[5] = '\0';

//     printf("%s", moji);

//     return 0;
// }

// int main(void)
// {
//     char moji1[10] = {'H','e','l','l','o','\0'};
//     char moji2[] = "world";
//     printf("%s\n", moji1);
//     printf("%s\n", moji2);

//     return 0;
// }

// #include <string.h>

// int main(void)
// {
//     char moji1[20] = "hello";
//     char moji2[10] = {0};

//     char moji3[20] = "world";
//     char moji4[10] = {0};

//     size_t len;

//     len = strlen(moji1);

//     memcpy(moji2, moji1, len);
//     printf("%s\n", moji2);

//     strcpy_s(moji4, 10, moji3);
//     printf("%s\n", moji4);

//     return 0;
// }

// #include <string.h>

// int main(void)
// {
//     size_t len;

//     len = strlen("world");
//     return 0;
// }

// #include <string.h>

// int main(void)
// {
//     char ja_moji[] = "テストです";

//     printf("%s\n", ja_moji);

//     printf("%d\n", sizeof(ja_moji));

//     return 0;
// }

// int main(void)
// {
//     char moji;

//     for (moji = 0x20; moji <= 0x7E; moji++)
//     {
//         printf("%c", moji);
//     }
//     return 0;
// }

// int main(void)
// {
//     struct Coordinate position;

//     position.latitude = 34.6461867;
//     position.longitude = 134.9991424;

//     return 0;
// }

// typedef struct
// {
//     double latitude;
//     double longitude;
// } Coordinate;

// Coordinate pos;

// int main(void)
// {
//     // Coordinate pos1 = {34.6461, 134.9991};
//     // Coordinate pos2;

//     // pos2 = pos1;

//     Coordinate pos[3] =
//     {
//         {34.646186, 134.999142},
//         {38.259621, 140.882061},
//         {43.068551, 141.350975},
//     };

//     pos[0].latitude = 33.521499;
//     pos[0].latitude = 33.521499;

//     return 0;
// }

// typedef struct
// {
//     double latitude;
//     double longitude;
// } Coordinate;

// // 座標表示
// void printCoordinate(Coordinate pos)
// {
//     printf("lat:%lf\n", pos.latitude);
//     printf("lon:%lf\n", pos.longitude);
// }

// int main(void)
// {
//     Coordinate pos = {34.6461867, 134.9991424};

//     printCoordinate(pos);

//     return 0;
// }

// typedef struct
// {
//     char num1;
//     short num2;
//     char num3;
//     long num4;
// } S_NUM;

// int main(void)
// {
//     S_NUM num;

//     printf("size:%d\n", sizeof(S_NUM));

//     printf("num1:0x%p\n", &num.num1);
//     printf("num2:0x%p\n", &num.num2);
//     printf("num3:0x%p\n", &num.num3);
//     printf("num4:0x%p\n", &num.num4);

//     return 0;
// }

// typedef struct
// {
//     unsigned char hour;
//     unsigned char min;
//     unsigned char sec;
// } S_Time;

// S_Time setTime(unsigned char hour, unsigned char min,  unsigned char sec)
// {
//     S_Time time = {0};

//     if (hour >= 24 || min >= 60 || sec >= 60)
//     {
//         return time;
//     }

//     time.hour = hour;
//     time.min = min;
//     time.sec = sec;

//     return time;
// }

// void PrintTime(S_Time time)
// {
//     printf("%d時%d分%d秒\n", time.hour, time.min, time.sec);
// }

// int main(void)
// {
//     S_Time time = {18, 28, 6};

//     PrintTime(time);

//     return 0;
// }

// S_Time setTime(unsigned char hour, unsigned char min,  unsigned char sec)
// {
//     S_Time time = {0};

//     if (hour >= 24 || min >= 60 || sec >= 60)
//     {
//         return time;
//     }

//     time.hour = hour;
//     time.min = min;
//     time.sec = sec;

//     return time;
// }

// int main(void)
// {
//     S_Time time;
//     time = setTime(18, 30, 30);

//     printf(time);

//     return 0;
// }

// typedef union
// {
//     char sofa[2];
//     short bed;
// } U_SOFABED;

// int main(void)
// {
//     U_SOFABED sofabed;

//     sofabed.sofa[0] = 0x12;
//     sofabed.sofa[1] = 0x34;

//     sofabed.bed = 0x5678;

//     return 0;
// }

// #define D_KIND_APPLE_ID (0)
// #define D_KIND_BANANA_ID (1)
// #define D_KIND_PEACH_ID (2)

// void printPrice(int kind)
// {
//     switch (kind)
//     {
//     case D_KIND_APPLE_ID:
//         printf("250yen\n");
//         break;

//     case D_KIND_BANANA_ID:
//         printf("300yen\n");
//         break;

//     case D_KIND_PEACH_ID:
//         printf("450yen\n");
//         break;
//     }
// }

// int main(void)
// {
//     printPrice(D_KIND_PEACH_ID);
//     return 0;
// }

// #define trinangle(base, high) ((base) * (high) / 2.0)

// int main(void)
// {
//     double area;

//     area = trinangle(10.0, 30.0);
//     printf("%lf\n", area);

//     return 0;
// }

#define D_PI (3.14)

double getCircleLength(double radius)
{
    return radius * 2 * D_PI;
}

int main(void)
{
    double len;

    len = getCircleLength(2.8 + 1.4);
    printf("%lf\n", len);

    return 0;
}