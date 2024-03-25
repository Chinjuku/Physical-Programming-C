#include<string.h>
#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    int num = 0;
    char str[150];
    scanf("%c %[^\n]", &ch, str);
    int len = strlen(str);

    for(int i = 0; i<len; i++){
        if(tolower(str[i]) == tolower(ch)){
            num++;
        }
    }
    printf("%d", num);
    return 0;
}