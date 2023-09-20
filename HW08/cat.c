#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    char str[2000];
    int arr[20], num = 0;
    
    scanf("%[^\n]", str);

    for (int i = 0; i < strlen(str); i++)
    {   
        str[i] = tolower(str[i]);
        str[i+1] = tolower(str[i+1]);
        str[i+2] = tolower(str[i+2]);
        if(str[i] == 'c' && str[i+1] == 'a' && str[i+2] == 't'){
            // printf("%d ", i);
            arr[num] = i;
            num++;
        }
    }
    if(num == 1)
    {
        printf("%d", arr[num-1]);
    }
    else if(num > 1){
        for (int i = 0; i < num-1; i++)
        {
            printf("%d, ", arr[i]);
        }
        printf("%d", arr[num-1]);
    }
    
}