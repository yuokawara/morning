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

H_CASHCARD createBankAccount(const char * name, unsigned short pincode)
{
    S_BANK_ACCOUNT * pAccount = NULL;

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
    S_BANK_ACCOUNT * pAccount = (S_BANK_ACCOUNT *)hcard;

    if (pAccount == NULL)
    {
        return -1;
    }

    printf("------------\n");
    printf("名前：%s様\n", pAccount->name);
    printf("残高：%d円\n", pAccount->balance);

    return 0;
}
