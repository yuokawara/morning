#include <stdio.h>

#include <stdlib.h>

// enum
// {
//     E_MUSIC_A,
//     E_MUSIC_B,
// };

// void music(int musicKind)
// {
//     char * pMusic = NULL;
//     size_t musicSize = 0;

//     if(musicKind == E_MUSIC_A)
//     {
//         musicSize = 1024 * 1024;
//     }
//     else
//     {
//         musicSize = 5 * 1024 * 1024;
//     }

//     // サイズ分のメモリ確保
//     pMusic = (char *)malloc(musicSize);

//     // 使用後不要なメモリは開放
//     free(pMusic);
//     pMusic = NULL;

//     return;
// }

// int main(void)
// {
//     // 再生
//     music(E_MUSIC_A);

//     return 0;
// }

#define D_ARRAY (1000)

int main(void)
{
    long * pArray = NULL;
    int i;

    pArray = (long *)malloc(sizeof(long) * D_ARRAY);
    if (pArray == NULL)
    {
        printf("error");
        return 0;
    }

    for (i = 0; i < D_ARRAY; i++)
    {
        pArray[i] = i;
    }

    for (i = D_ARRAY - 10; i < D_ARRAY; i++)
    {
        printf("[%d] = %d\n", i, pArray[i]);
    }

    free(pArray);
    pArray = NULL;

    return 0;
}