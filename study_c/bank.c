#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bank.h"

#define D_ACCOUNT_NAMESIZE (64)

typedef struct
{
    char name[D_ACCOUNT_NAMESIZE];
    unsigned short pincode;
    unsigned long balance;
} S_BANK_ACCOUNT;

H_CASHCARD createBankAccount(const char *name, unsigned short pincode)
{
    S_BANK_ACCOUNT *pAccount = NULL;

    if (name == NULL)
    {
        return NULL;
    }

    pAccount = (S_BANK_ACCOUNT *)malloc(sizeof(S_BANK_ACCOUNT));
    if (pAccount == NULL)
    {
        return NULL;
    }

    // 初期化
    strcpy_s(pAccount->name, D_ACCOUNT_NAMESIZE, name);
    pAccount->pincode = pincode;
    pAccount->balance = 0;

    return pAccount;
}

int printBalance(H_CASHCARD hcard)
{
    S_BANK_ACCOUNT *pAccount = (S_BANK_ACCOUNT *)hcard;

    if (pAccount == NULL)
    {
        return -1;
    }

    printf("------------\n");
    printf("名前：%s様\n", pAccount->name);
    printf("残高：%d円\n", pAccount->balance);

    return 0;
}

int depositMoney(H_CASHCARD hCard, unsigned long money)
{
    S_BANK_ACCOUNT *pAccount = (S_BANK_ACCOUNT *)hCard;

    if (pAccount == NULL)
    {
        return -1;
    }

    pAccount->balance += money;

    return 0;
}

int withdrawalMoney(H_CASHCARD hCard, unsigned short pincode, unsigned long reqmoney)
{
    S_BANK_ACCOUNT *pAccount = (S_BANK_ACCOUNT *)hCard;

    if (pAccount == NULL)
    {
        return -1;
    }

    if (pAccount->pincode != pincode)
    {
        return -2;
    }

    if (pAccount->balance < reqmoney)
    {
        return -3;
    }
}

int destroyBankAccount(H_CASHCARD hCard, unsigned short pincode)
{
    S_BANK_ACCOUNT *pAccount = (S_BANK_ACCOUNT *)hCard;

    if (pAccount == NULL)
    {
        return -1;
    }

    if (pAccount->pincode == pincode)
    {
        return -2;
    }

    free(pAccount);

    return 0;

}