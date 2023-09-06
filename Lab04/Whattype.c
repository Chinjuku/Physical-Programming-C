#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    scanf("%c", &ch);

    if ((ch >='0' && ch <= '9')){
        if (isalnum(ch)){
        printf("number");
        }
    }
    else if (islower(ch)){
        printf("lowercase");
    }
    else if (isupper(ch)){
        printf("uppercase");
    }
    else
        printf("error");
    return 0;
}