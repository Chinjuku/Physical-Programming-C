#include<stdio.h>

int main(){
    char type;

    scanf("%c", &type);
    if (type >= 'A' && type <= 'Z'){
    printf("%c", type+32);
    }
    else if(type >= 'a' && type <= 'z'){
        printf("%c", type-32);
    }
    else
        printf("error");
    return 0;
}