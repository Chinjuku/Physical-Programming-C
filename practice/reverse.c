#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    scanf("%[^\n]", str);

    int len = strlen(str), check = 0;
    for (int i = 0; i < len; i++)
    {
        // printf("%c", str[len-i-1]);
        if(str[i] != str[len-i-1]){
            check = 1;
            break;
        }
        else{
            check = 0;
            break;
        }
    }
    if(check == 1){
        printf("It is not palindome");
    }
    else{
        printf("It is palindome");
    }

    return 0;
}