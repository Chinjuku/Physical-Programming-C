#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char arr[60][60];
    char sort[26] = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < 20; i++){
        // scanf("%[^\n]", arr[i]);
        fgets(arr[i], sizeof(arr[i]), stdin);
        
    }

    for(int i = 0; i < 20; i++){
        printf("%s", arr[i]);
        for(int j=0; j<26; j++){
            if(arr[0] == toupper(sort[j])){
                printf("%s",arr[i]);
            }
        }
    }





    return 0;
}