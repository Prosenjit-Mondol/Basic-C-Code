#include<stdio.h>
struct time_struct
{
    int hour;
    int min;
    int second;
};
int main()
{
    struct time_struct time;
    time.hour=18;
    time.min=45;
    time.second=53;
    printf("%d\t%d\t%d\t",time.hour,time.min,time.second);
    return 0;
}
