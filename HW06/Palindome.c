#include<stdio.h>
#include<string.h>

int main(){
    char arr[100], keep1[100], keep2[100];
    int count = 0, count2 = 0;
    scanf("%s", arr);
    int len = strlen(arr);
    arr[strcspn(arr, "\n")] = '\0';
    if (len%2 != 0){
    for (int i = 0; i < len - len/2 -1; i++){
        // printf("%c", arr[i]);
        keep1[count] = arr[i];
        count++;
        keep1[count] = '\0';
        }
    for (int i = len-1; i > len/2 ; i--){
        // printf("%c\n", arr[i]);
        keep2[count2] = arr[i];
        count2++;
        keep2[count2] = '\0';
        }
        
    }
    else{
        for (int i = 0; i < len/2; i++){
        // printf("%c\n", arr[i]);
        keep1[count] = arr[i];
        count++;
        keep1[count] = '\0';
    }
    
    for (int i = len-1; i > len/2 -1; i--){
        // printf("%c\n", arr[i]);
        keep2[count2] = arr[i];
        count2++;
        keep2[count2] = '\0';
    }
    }
    // printf("%s\n", keep1);
    // printf("%s\n", keep2);
    int value = strcmp(keep1, keep2);
    if (value == 0){
        printf("It is Palindrome.");
    }
    else{
        printf("It is not Palindrome.");
    }
    return 0;
}