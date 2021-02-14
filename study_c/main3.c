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

int sumArray(long *pArray, int *arrayNum, long *pSum)
{
    long sum = 0;
    int i;

    if (pArray == NULL || pSum == NULL)
    {
        return -1;
    }

    for (i = 0; i < arrayNum; i++)
    {
        sum += pArray[i];
    }
    *pSum = sum;

    return 0;
}

int main(void)
{
    long num[] = {29, 9642, -3849, 628, 20};
    long sum = 0;
    int ret;

    ret = sumArray(num, sizeof(num) / sizeof(num[0]), &sum);

    if (ret == 0)
    {
        printf("sum:%d", sum);
    }
    else
    {
        printf("error");
    }
    return 0;
}