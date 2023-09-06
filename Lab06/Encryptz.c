#include<stdio.h>
#include<string.h>

int main(){
    char arr[200];
    char up[] = {'R', 'M', 'N', 'C', 'E', 'D', 'K',
    'L', 'J', 'O', 'S', 'H', 'T', 'U', 'F', 'V', 'Z',
    'G', 'W', 'I', 'A', 'B', 'X', 'Y', 'P', 'Q'};
    printf("%c", up[0]+32);
    // // char low[] = {'r', 'm', 'n', 'c', 'e', 'd', 'k',
    // // 'l', 'j', 'o', 's', 'h', 't', 'u', 'f', 'v', 'z',
    // // 'g', 'w', 'i', 'a', 'b', 'x', 'y', 'p', 'q'};
    // int check = 0, count = 1;

    // scanf("%[^\n]", arr);
    // int len = strlen(arr);
    
    // while (!check){
    //     for(int i = 0; i < len ; i++){
    //         for(int j = 0; j < 26; j++){
    //             if (arr[i] == up[j] || arr[i]+32 == up[j]+32){
    //                 if (j >= 0 && j <= 4){
    //                     printf("%c", up[j+21]);
    //                     // printf("\n%c", arr[j]+32);
    //                     check = 1;
    //                     break;
    //                 }    
    //                 else{
    //                     printf("%c", up[j-5]);
    //                     check = 1;
    //                     break;
    //                 }
    //             }
    //             // else if (arr[i] == low[j]){
    //             //     if (j >= 0 && j <= 4){
    //             //         printf("%c", low[j+21]);
    //             //         check = 1;
    //             //         break;
    //             //     }    
    //             //     else{
    //             //         printf("%c", low[j-5]);
    //             //         check = 1;
    //             //         break;
    //             //     }
    //             // }
    //             // else if (arr[i] == ' '){
    //             //     printf(" ");
    //             //     check = 1;
    //             //     break;
    //             // }
    //         }
    //     }
    // }

    return 0;
}