#include<stdio.h>
#include<string.h>

int main(){
    char arr[300], ch;
    int num[100], count = 0;
    scanf("%[^\n] %c", arr, &ch);
    int len = strlen(arr);

    for (int i = 0; i < len; i++)
    {
        if(arr[i] == ch || arr[i] == ch-32){
            num[count] = i+1;
            count++;
        }
    }
    for (int i = 0; i < count-1; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("%d count=%d", num[count-1], count);
    
    

    return 0;
}