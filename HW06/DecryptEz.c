#include<stdio.h>
#include<string.h>

int main(){
    char arr[200];
    char up[] = {'R', 'M', 'N', 'C', 'E', 'D', 'K',
    'L', 'J', 'O', 'S', 'H', 'T', 'U', 'F', 'V', 'Z',
    'G', 'W', 'I', 'A', 'B', 'X', 'Y', 'P', 'Q'};
    char low[] = {'r', 'm', 'n', 'c', 'e', 'd', 'k',
    'l', 'j', 'o', 's', 'h', 't', 'u', 'f', 'v', 'z',
    'g', 'w', 'i', 'a', 'b', 'x', 'y', 'p', 'q'};
    int check = 0, count = 1;

    scanf("%[^\n]", arr);
    int len = strlen(arr);
    
    while (!check){
        for(int i = 0; i < len ; i++){
            for(int j = 0; j < 26; j++){
                if (arr[i] == up[j]){
                    if (j >= 21 && j <= 25){
                        printf("%c", up[j-21]);
                        check = 1;
                        break;
                    }    
                    else{
                        printf("%c", up[j+5]);
                        check = 1;
                        break;
                    }
                }
                else if (arr[i] == low[j]){
                    if (j >= 21 && j <= 25){
                        printf("%c", low[j-21]);
                        check = 1;
                        break;
                    }    
                    else{
                        printf("%c", low[j+5]);
                        check = 1;
                        break;
                    }
                }
                else if (arr[i] == ' '){
                    printf(" ");
                    check = 1;
                    break;
                }
                // else if (arr[i] == up[21] || arr[i] == up[22] || arr[i] == up[23]
                //         || arr[i] == up[24] || arr[i] == up[25]){
                // else if (arr[i] == up[j]){
                //     printf("(%d %c)", j, up[j]);
                //     count++;
                //     check = 1;
                //     break;
                // }
            }
        }
    }
    
    
    

    return 0;
}