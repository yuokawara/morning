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

// int main(void)
// {
//     char score = 80;

//     printf("start:%d", score);

//     if (score == 100)
//     {
//         printf("excellent");
//     }
//     else if (score <= 99 && score >= 80)
//     {
//         printf("so good");
//     }
//     else if (score <= 79 && score >= 30)
//     {
//         printf("good");
//     }
//     else if (score <= 29 && score >= 0)
//     {
//         printf("no good");
//     }
//     else
//     {
//         printf("miss");
//     }

//     return 0;
// }

// int main(void)
// {
//     long year = 2032;
//     printf("%d年：", year);

//     if (year % 4 == 0)
//     {
//         if (year % 100 && year % 400 != 0)
//         {
//             printf("平年\n");
//         }
//         else
//         {
//             printf("閏年\n");
//         }
//     }
//     else
//     {
//         printf("平年\n");
//     }

//     return 0;
// }

// int main(void)
// {
//     int fruit = 4;
//     switch (fruit)
//     {
//     case 0:
//         printf("150yen");

//     case 1:
//         printf("80yen");

//     case 2:
//         printf("400yen");

//     default:
//         printf("no fruit");
//         break;
//     }

//     return 0;
// }

// int main(void)
// {
//     int i;

//     for (i=0 ; i< 10; i++)
//     {
//         printf("数字　%d\n", i);
//     }

//     return 0;
// }

// int main(void)
// {
//     char i;
//     char k;
//     for (i = 1; i <= 9; i++)
//     {
//         for (k = 1; k <= 9; k++)
//         {
//             printf("%2d", i * k);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(void)
// {
//     int i = 10;

//     while (i < 100)
//     {
//         if (i % 2 == 0)
//         {
//             i++;
//             continue;
//         }
//         if (i > 50)
//         {
//             break;
//         }
//         printf("%d\n", i);

//         i++;
//     }
//     return 0;
// }
// int sum(int para1, int para2)
// {
//     int calc;

//     calc = para1 + para2;

//     return calc;
// }

// short ret;

// ret = subfunc(input);

// if (ret == -1)
// {
//     printf("ERR");
//     return 0;
// }

// unsigned long getAreaTriangle(unsigned long bottom, unsigned long height)
// {
//     unsigned long triangleArea;
//     triangleArea = bottom * height / 2;

//      return triangleArea;
// }

// int main(void)
// {
//     unsigned long bottom = 15;
//     unsigned long height = 20;
//     unsigned long triangleArea;

//     triangleArea = getAreaTriangle(bottom, height);

//     printf("面積 : %d", triangleArea);
//     return 0;
// }

unsigned long getFactorial(unsigned short number)
{
    // unsigned long answer;
    // answer = number * 1;
    // return answer;
    unsigned long ans = 1;
    unsigned short i;

    for (i = 1; i <= number; i++)
    {
        ans *= i;
    }
    return ans;
}

int main(void)
{
    //     unsigned long number = 3;
    //     unsigned long answer;
    //     answer = getFactorial(number);
    //     printf("数字 : %d", answer);
    //     return 0;
    unsigned short num = 10;

    printf("数字 : %d", getFactorial(num));
    return 0;
}