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

int main(void)
{
    int num[] = {10, 3002, 529, 1920};

    int i;
    int max = num[0];

    for (i = 1; i < sizeof(num)/sizeof(num[0]); i++)
    {
        if(max < num[i])
        {
            max = num[i];
        }
    }
    printf("%d", max);
    return 0;
}