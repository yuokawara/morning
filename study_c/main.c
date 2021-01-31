#include <stdio.h>

// int main(void)
// {
//     // コメントアウト
//     /* コメントアウト */
//     // printf("%d\n", 5 + 3);
//     // printf("ものつくり\nC言語");
//     // getchar();
//     // return 0;

//     int calc;
//     int result;

//     calc = 10 * 20;

//     result = calc / 5;
//     printf("%d\n", result);

//     result = calc / 10;
//     printf("%d\n", result);

//     return 0;
// }

// int main (void)
// {
//     int calc;
//     int result;

//     calc = 5 + 5;

//     result = calc - 2;
//     printf("加算 : %d\n", result);

//     result = calc - 8;
//     printf("減算 : %d\n", result);

//     result = calc + 5;
//     printf("乗算 : %d\n", result);

//     result = calc / 10;
//     printf("序算 : %d\n", result);

//     result = calc % 8;
//     printf("あまり : %d\n", result);

//     return 0;

// }

// int main (void)
// {
//     char tmp1 = 120;
//     short tmp2 = 23456;
//     long calc;

//     // tmp1 = 120;
//     // tmp2 = 23456;

//     calc = tmp1 + tmp2;

//     printf("calc %d\n", calc);
//     return 0;
// }

// int main (void)
// {
//     int self;

//     self = 50;
//     self += 30;

//     printf("self %d\n", self);
//     return 0;
// }

// int main (void)
// {
//     unsigned char num1 = 254;

//     num1++;
//     printf("%d\n",num1);

//     num1++;
//     printf("%d\n",num1);
//     return 0;
// }

// int main (void)
// {
//     unsigned char num1 = 1;

//     num1--;
//     printf("%d\n", num1);

//     num1--;
//     printf("%d\n", num1);
//     return 0;
// }

// int main(void)
//  {
//      int number = 10;

//      if (number == 10)
//      {
//          printf("sucess");
//          // printf("%d\n", number == 10);
//      }
//      else
//      {
//          printf("fault");
//          // printf("%d\n", number != 10);
//      }
//      return 0;
//   }

//   int main(void)
//   {
//       int number = 10;
//       printf("%d\n", number == 10);
//       printf("%d\n", number != 10);
//   }

// int main(void)
// {
//     int number = 10;

//     if (number == 10)
//     {
//         printf("good");
//     }
//     else if (number > 10)
//     {
//         printf("no good");
//     }
//     else
//     {
//         printf("nothing");
//     }
//     return 0;
// }

// int main(void)
//  {
//      //int number = 58;
//      int number = 73;

//      if(number % 2 == 0)
//      {
//          printf("偶数：%d", number);
//      }
//     else
//     {
//         printf("ki数：%d", number);
//     }

//     return 0;
//  }

int main(void)
{
    char score = 100;

    printf("start:%d", score);

    if (score == 100)
    {
        printf("excellent:%d", score);
    }
    else if (score <= 99 && score >= 80)
    {
        printf("so good:%d", score);
    }
    // else if (score <= 79 && score >= 30)
    // {
    //     printf("good:%d", score);
    // }
    // else if (score <= 29 && score >= 0)
    // {
    //     printf("no good:%d");
    // }
    else
    {
        printf("error:%d");
    }

    return 0;
}