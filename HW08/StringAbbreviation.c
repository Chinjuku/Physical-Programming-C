#include<string.h>
#include<stdio.h>
#include<ctype.h>

int main(void){
    char str[200];
    // gets(str);
    scanf("%[^\n]", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if(isupper(str[i])){
            // printf("%c.", str[i]);
            putchar(str[i]);
        }
    }
}