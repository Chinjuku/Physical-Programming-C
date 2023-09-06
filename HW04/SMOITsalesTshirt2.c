#include<stdio.h>
int main(){
    double price, discount, percent;
    int count, frees, sed, dis;
    scanf("%lf %d %d", &price, &dis, &count);
    sed = count%3;
    frees = count/3;
    discount = (frees*2*price) + (sed*price);
    percent = (price*count*(100-dis))/100;
    if(discount < percent){
        printf("Buy 2 Get 1\n%.2lf", discount);
    }
    else if(percent < discount){
        printf("Discount %d%%\n%.2lf", dis, percent);
    }
    else
        printf("Discount %d%%\n%.2lf", dis, percent);
    return 0;
}

