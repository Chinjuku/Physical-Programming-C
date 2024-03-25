#include <stdio.h>
#include <string.h>

int main(){
    char str[150];
    scanf("%[^\n]", str);
    int len = strlen(str);
    // printf("%d", len);
    for(int i = 0; i < len; i++){
        if(str[i] != ' '){
            printf("%c", str[i]);
        }
    }
    return 0;
}