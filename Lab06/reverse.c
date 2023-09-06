#include <stdio.h>
#include<string.h>

int main() {
    char arr[100];
    scanf("%[^\n]", arr);
    int len = strlen(arr);
    // for (int i = len-1; i > -1; i--) {
    //     printf("%c", arr[i]);
    // }
    for(int i = 0; i < len; i++){
        printf("%c", arr[len - i - 1]);
    }
    return 0;
}
