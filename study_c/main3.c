#include <stdio.h>

// atmFunc(0x1234, 0x9999, 10000, &money, &balance);

// // 参照例
// *pMoney = 10000;
// *pBalance = 40000;

// void getAreaTriangle(unsigned short bottom, unsigned short height, unsigned long *pArea)
// {
//     *pArea = bottom * height / 2;

//     return;
// }

// int main(void)
// {
//     unsigned short bottom = 1000;
//     unsigned short height = 300;
//     unsigned long area;

//     getAreaTriangle(bottom, height, &area);

//     printf("bottom %d height %d 面積 %d", bottom, height, area);

//     return 0;
// }

// void convConsumptionTax(long * pPrice)
// {
//     *pPrice *= 1.08;

//     return;
// }

// int main(void)
// {
//     long price = 10000;

//     convConsumptionTax(&price);

//     printf("tax %d", price);

//     return 0;
// }

// void getEdisonBirthday(long *pYear, unsigned char *pMonth, unsigned short *pDay)
// {
//     *pYear = 1847;
//     *pMonth = 2;
//     *pDay = 11;

//     return;
// }

// int main(void)
// {
//     long year;
//     unsigned char month;
//     unsigned short day;

//     getEdisonBirthday(&year, &month, &day);

//     printf("birthday: %ld年%d月%d日", year, month, day);

//     return 0;
// }

// long num1 = 100;
// long * pnum = NULL;

// pnum = &num;
// *pnum = 0x01;

// int sunbfunc(long * pnum)
// {
//     //NULLチェック
//     if (pnum == NULL)
//     {
//         printf("ERR");
//         return -1;
//     }
// }

// void subfunc(long * pnum, int size);

// int main(void)
// {
//     long num[5] = { 10, 30, 30, 40, 50 };

//     subfunc(num, sizeof(num)/sizeof(num[0]));

//     return 0;
// }

// void subfunc(long * pnum, int size)
// {
//     int i;

//ex1
// for (i = 0; i < size; i++)
// {
//     printf("%d\n", pnum[i]);
// }

//ex2
// for (i = 0; i < size; i++)
// {
//     printf("%d\n", *(pnum + 1));
// }

//ex3
// for (i = 0; i < size; i++)
// {
//     printf("%d\n", *pnum);
//     pnum++;
// }

// return;
// }

// int sumArray(long *pArray, int *arrayNum, long *pSum)
// {
//     long sum = 0;
//     int i;

//     if (pArray == NULL || pSum == NULL)
//     {
//         return -1;
//     }

//     for (i = 0; i < arrayNum; i++)
//     {
//         sum += pArray[i];
//     }
//     *pSum = sum;

//     return 0;
// }

// int main(void)
// {
//     long num[] = {29, 9642, -3849, 628, 20};
//     long sum = 0;
//     int ret;

//     ret = sumArray(num, sizeof(num) / sizeof(num[0]), &sum);

//     if (ret == 0)
//     {
//         printf("sum:%d", sum);
//     }
//     else
//     {
//         printf("error");
//     }
//     return 0;
// }

// int sortNumber(long * pNumber, int arrayNum)
// {
//     int i, k;
//     long tmp;

//     if (pNumber == NULL)
//     {
//         return -1;
//     }

//     for (i = 0; i < arrayNum; i++)
//     {
//         for (k = i + 1; k < arrayNum; k++)
//         {
//             if(pNumber[i] > pNumber[k])
//             {
//                 tmp = pNumber[i];
//                 pNumber[k] = tmp;
//             }
//         }
//     }
//     return 0;
// }

// int main(void)
// {
//     long num[] = {10, -290, 3498, 28, -943};
//     int i;

//     sortNumber(num, sizeof(num)/sizeof(num[0]));

//     for (i = 0; i < sizeof(num)/sizeof(num[0]); i++)
//     {
//         printf("%d\n", num[i]);
//     }
//     return 0;
// }

// typedef struct
// {
//     double lon;
//     double lat;
// } S_Coordinate;

// int main(void)
// {
//     S_Coordinate pos;
//     S_Coordinate * pPos = &pos;

//     pPos->lon = 139.74;
//     pPos->lat = 35.65;

//     // 間接参照 ドット演算子
//     (*pPos).lon = 139.74;
//     (*pPos).lat = 35.65;

//     return 0;
// }

// typedef struct
// {
//     double latitude;
//     double longitude;
// } S_Coordinate;

// int getTokyoTowerPosition (S_Coordinate * pPos)
// {
//     if (pPos == NULL)
//     {
//         return -1;
//     }

//     pPos->latitude = 35.658581;
//     pPos->longitude = 139.745433;

//     return 0;

// }

// int main(void)
// {
//     S_Coordinate pos = {0};
//     int ret = -1;

//     if (ret < 0)
//     {
//         printf("error");
//     }
//     else
//     {
//         printf("lati:%lf longi:%lf", pos.latitude, pos.longitude);
//     }

//     return 0;
// }

// typedef struct
// {
//     long japanese;
//     long arithmetic;
//     long science;
//     long social;
// } S_Subject;

// int getAverage(S_Subject pSub[], int num, S_Subject * pAve)
// {
//     S_Subject ave = {0};
//     int i;

//     for (i = 0; i < num; i++)
//     {
//         ave.japanese += pSub[i].japanese;
//         ave.arithmetic += pSub[i].arithmetic;
//         ave.science += pSub[i].science;
//         ave.social += pSub[i].social;
//     }

//     ave.japanese /= num;
//     ave.arithmetic /= num;
//     ave.science /= num;
//     ave.social /= num;

//     *pAve = ave;

//     return 0;
// }

// int main(void)
// {
//     S_Subject point[] = {
//         {72, 85, 54, 61},
//         {50, 43, 38, 49},
//         {89, 92, 87, 78},
//         {72, 25, 36, 98},
//     };
//     S_Subject ave = {0};
//     int ret;

//     ret = getAverage(point, sizeof(point)/sizeof(point[0]), &ave);

//     if (ret < 0)
//     {
//         printf("error");
//     }
//     else
//     {
//         printf("jap:%d\n", ave.japanese);
//         printf("math:%d\n", ave.arithmetic);
//         printf("sci:%d\n", ave.science);
//         printf("soci:%d\n", ave.social);
//     }
//     return 0;

// }

// int main(void)
// {
//     char * pnum1;
//     short * pnum2;
//     long * pnum3;

//     printf("pnum1 :%d\n", sizeof(pnum1));
//     printf("pnum2 :%d\n", sizeof(pnum2));
//     printf("pnum3 :%d\n", sizeof(pnum3));

//     printf("----------\n");

//     // printf("char: %d\n", sizeof(char *));
//     // printf("short: %d\n", sizeof(short *));
//     // printf("long: %d\n", sizeof(long *));

//     // printf("----------\n");

//     // printf("pnum1: %d\n", sizeof(*pnum1));
//     // printf("pnum2: %d\n", sizeof(*pnum2));
//     // printf("pnum3: %d\n", sizeof(*pnum3));
// }
// long func(long num1, long num2)
// {
//     printf("%d\n", num1 + num2);
//     return num1 + num2;
// }

// int main(void)
// {
//     // 関数ポインタ
//     long (*pfunc)(long, long);
//     func(100, 200);

//     pfunc = func;
//     pfunc(100, 200);

//     return 0;
// }

// typedef long(* FP_FUNC)(int, short);

// void sub(FP_FUNC pfunc, int num)
// {
//     return;
// }

// int main(void)
// {
//     FP_FUNC pfunc = NULL;
//     sub(pfunc, 100);

//     return 0;
// }

// typedef void (* FP_HELLO)(void);

// void hello(void)
// {
//     printf("hello\n");
// }

// int main(void)
// {
//     FP_HELLO pFunc = NULL;
//     pFunc = hello;
//     pFunc();

//     return 0;
// }

typedef void (*FP_CALCULATION)(long, long);

void addition(long num1, long num2)
{
    printf("%d + %d => %d\n", num1, num2, num1 + num2);
    return;
}

void subtraction(long num1, long num2)
{
    printf("%d - %d => %d\n", num1, num2, num1 - num2);
    return;
}

void multiplication(long num1, long num2)
{
    printf("%d * %d => %d\n", num1, num2, num1 * num2);
    return;
}

void division(long num1, long num2)
{
    printf("%d / %d => %d\n", num1, num2, num1 / num2);
    return;
}

int main(void)
{
    FP_CALCULATION pFunc[] = {
        addition,
        subtraction,
        multiplication,
        division};
    int i;

    for (i = 0; i < sizeof(pFunc) / sizeof(pFunc[0]); i++)
    {
        pFunc[i](200, 50);
    }
    return 0;
}