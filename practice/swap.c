#include <stdio.h>

int swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;

}

int main(){
    int a, b, c, d;
    int *pa = &a;
    int *pb = &b;
    int *pc = &c;
    int *pd = &d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    swap(&a, &b);
    swap(&b, &c);
    swap(&c, &d);

    printf("%d %d %d %d", a, b, c, d);

    return 0;

}