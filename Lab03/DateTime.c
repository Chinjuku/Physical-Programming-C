#include<stdio.h>

int main(){
    int num, day, hour, minute, firstnum;

    scanf("%d", &num);
    
    firstnum = num;
    day = num / 86400;
    num -= (86400*day);
    hour = num / 3600;
    num -= (3600*hour);
    minute = num / 60;
    num -= (60*minute);
    
    printf("%d s = %d d %d h %d m %d s", firstnum, day, hour, minute, num);

    return 0;
}