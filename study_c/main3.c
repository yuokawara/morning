#include <stdio.h>

// atmFunc(0x1234, 0x9999, 10000, &money, &balance);

// // 参照例
// *pMoney = 10000;
// *pBalance = 40000;

// void getAreaTriangle(unsigned short bottom, unsigned short height, unsigned long * pArea)
// {
//     *pArea = bottom * height /2;

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

void convConsumptionTax(long * pPrice)
{
    *pPrice *= 1.08;

    return;
}

int main(void)
{
    long price = 10000;

    convConsumptionTax(&price);

    printf("tax %d", price);

    return 0;
}