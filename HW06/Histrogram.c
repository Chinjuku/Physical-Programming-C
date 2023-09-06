// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// struct CharCount {
//     char character;
//     int count;
// };

// int main() {
//     char arr[100];
//     int num;
    
//     scanf("%d", &num);
    
//     struct CharCount charCounts[num];
    
//     for (int i = 0; i < num; i++) {
//         scanf(" %c", &arr[i]);
//         charCounts[i].character = tolower(arr[i]);
//         charCounts[i].count = 0;
//     }

//     for (int i = 0; i < num; i++) {
//         charCounts[i].count++;
//         for (int j = i + 1; j < num; j++) {
//             if (charCounts[j].character == charCounts[i].character) {
//                 charCounts[i].count++;
//                 charCounts[j].character = ' ';
//             }
//         }
//     }

//     for (int i = 0; i < num; i++) {
//         if (charCounts[i].character != ' ') {
//             printf("%c: %d\n", charCounts[i].character, charCounts[i].count);
//         }
//     }

//     return 0;
// }
#include<stdio.h>
#include<string.h>
#include <ctype.h>


int main(){
    char arr[100];
    char arr2[] = "";
    int count[26] = {0};
    int num, check = 0;
    
    scanf("%d", &num);
    
    // arr[strcspn(arr, "\n")] = '\0';
    
    for(int i = 0; i < num; i++){
        scanf(" %c", &arr[i]);
    }
    int len = strlen(arr);
    
    while(!check){
        for(int i = 0; i < num; i++){
            int more = 0;
            arr[i] = tolower(arr[i]);
            for(int j = i+1; j < num; j++){
                if (arr[i] == arr[j]){
                    count[j]++;
                    more = 1;
                    check = 1;
                    break;
                }
                else{
                    count[j]++;
                    printf("%c: %d\n", arr[j], count[j]);
                    check = 1;
                    break;
                }
            }
        check =1;
        break;
    }
    } 
    return 0;
}