#include <stdio.h>
#include <time.h>

main()
{
    static char
        *week[] = {"sun", "mon", "tue", "wed", "thu", "fri", "sat"};
    time_t now, prev;
    struct tm
        *tm_now;

    prev = -1;
    for (;;)
    {
        now = time(NULL);
        if (prev == now)
            continue;
        prev = now;
        tm_now = localtime(&now);
        printf("%4d年%2d月%2d日 %s\n",
               tm_now->tm_year + 1900, tm_now->tm_mon + 1, tm_now->tm_mday, week[tm_now->tm_wday]);
        printf("%2d:%2d:%2d\n",
               tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec);
    }
}