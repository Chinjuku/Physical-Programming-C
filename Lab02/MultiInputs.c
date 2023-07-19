#include<stdio.h>
void main(){
    char string1[30];
    char string2[30];
    char string3[30];
    char string4[30];

    scanf("%s %s %s %s", string1, string2, string3, string4);

    printf("String 1: %.3s\n", string1);
    printf("String 2: %.4s\n", string2);
    printf("String 3: %.5s\n", string3);
    printf("String 4: %.6s\n", string4);
}