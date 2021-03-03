#include <stdio.h>
#include "bank.h"

int main(void)
{
    H_CASHCARD hCard1 = NULL;
    H_CASHCARD hCard2 = NULL;

    hCard1 = createBankAccount("諭吉", 0x1876);
    hCard2 = createBankAccount("ひでお", 0x1835);

    printBalance(hCard1);
    printBalance(hCard2);

    depositMoney(hCard1, 5000);
    depositMoney(hCard2, 10000);

    printBalance(hCard1);
    printBalance(hCard2);
}