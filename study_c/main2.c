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

#include <string.h>

int main(void)
{
    char moji1[20] = "hello";
    char moji2[10] = {0};

    char moji3[20] = "world";
    char moji4[10] = {0};

    size_t len;

    len = strlen(moji1);

    memcpy(moji2, moji1, len);
    printf("%s\n", moji2);

    strcpy_s(moji4, 10, moji3);
    printf("%s\n", moji4);

    return 0;
}