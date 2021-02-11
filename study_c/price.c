#include <stdio.h>
#include <time.h>

#define UNIT (30 * 60)
#define FEE 300

time_t get_caltime(char *tstr);

main()
{
    time_t cal_stime, cal_etime;
    char buff[100];
    int fee, unit;

    printf("parking start YYYYMMDDHHMMSS : ");
    scanf("%s", buff);
    cal_stime = get_caltime(buff);

    if (cal_stime == -1)
    {
        printf("test error\n");
        return;
    }
}