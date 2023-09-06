#include <stdio.h>

int fibo(int n){

    int i, t1 = 0, t2 = 1;

    int t3 = t1 + t2;

    for ( i = 2; i <= n; i++)
    {
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }
    return t3;
}

int main(){
    int num,method;
    scanf("%d", &num);

    method = fibo(num);
    printf("method = %d", method);

    return 0;
}