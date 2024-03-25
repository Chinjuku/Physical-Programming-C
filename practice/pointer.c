#include <stdio.h>
 
// 4 ตัว A B C D
// เรียง C A D B

int main(){
    char a, b, c, d;
    char *pA = &a;
    char *pB = &b;
    char *pC = &c;
    char *pD = &d;

    scanf("%c %c %c %c", &a, &b, &c, &d);

    char tmp = *pA;
    *pA = *pC;
    *pB = *pA;
    *pC = *pD;
    *pD = *pB;
    *pB = tmp;

    printf("%c %c %c %c", a, b, c, d);


    return 0;
}