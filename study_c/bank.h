#ifndef BANK_H
#define BANK_H

// プロトタイプ
typedef void *H_CASHCARD;
H_CASHCARD createBankAccount(const char * name, unsigned short pincode);
int printBalance(H_CASHCARD hCard);
int depositMoney(H_CASHCARD hCard, unsigned long money);
int withdrawalMoney(H_CASHCARD hCard, unsigned short pincode, unsigned long reqmoney);
int destroyBankAccount(H_CASHCARD hCard, unsigned short pincode);

#endif