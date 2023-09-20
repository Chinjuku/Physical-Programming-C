#include<stdio.h>

int main(){
    int num, day, hour, min, sec;
    int days, hours, mins, secs;
    scanf("%d", &num);

    int fullnum = num;

    days = num%86400;
    day = num/86400;
    hours = days%3600;
    hour = days/3600;
    mins = hours%60;
    min = hours/60;
    sec = mins;

    printf("%d s = %d d %d h %d m %d s", fullnum, day, hour, min, sec);

    return 0;
}