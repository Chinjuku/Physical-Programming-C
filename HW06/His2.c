#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){
    char arr[100];
    char up[] = "abcdefghijklmnopqrstuvwxyz";
    int count[26] = {0};
    int num, check = 0;

    scanf("%d", &num);
    int len = strlen(arr);
    // arr[strcspn(arr, "\n")] = '\0';
    
    for(int i = 0; i < num; i++){
        scanf(" %c", &arr[i]);
    }

    while (!check){
        for(int i = 0; i < num; i++){
            for (int j = 0; j < 26; j++){
                if (arr[i] == up[j] || arr[i] == toupper(up[j])){
                    count[j]++;
                    check = 1;
                    break;
                }
            }
        }
        check = 1;
        break;
    }

    for (int i = 0; i < 26; i++)
    {
        if(count[i] > 0){
            printf("%c: %d\n", up[i], count[i]);
        }
    }

    return 0;
}