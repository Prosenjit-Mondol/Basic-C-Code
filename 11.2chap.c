#include<stdio.h>
struct time
{
    int hour;
    int min;
    int second;
};
void increment(struct time *time)
{
    time->second++;/*An Arrow operator in C/C++ allows to
                   access elements in Structures and Unions.
  It is used with a pointer variable pointing to a
   structure or union. The arrow operator is formed by using a minus sign,
followed by the greater than symbol as shown below.Syntax:  (pointer_name)->(variable_name)*/
    if(time->second==60)
    {
        time->second=0;
        time->min++;
        if(time->min==60)
        {
            time->min=0;
            time->hour++;
        }
    }
}
int main()
{
    struct time time;
    printf("Enter the hour: ");
    scanf("%d", &time.hour);

    printf("Enter the minute: ");
    scanf("%d", &time.min);

    printf("Enter the second: ");
    scanf("%d", &time.second);

    increment(&time);

    printf("The updated time is: %02d:%02d:%02d\n", time.hour, time.min, time.second);
    return 0;
}
