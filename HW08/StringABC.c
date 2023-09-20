// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int cmpfunc (const void * a, const void * b) {
//    return ( *(int*)a - *(int*)b );
// }

// int main(void){
//     char str[200];
//     int arr[200];
//     scanf("%[^\n]", str);
//     for(int i = 0; i<strlen(str); i++){
//         arr[i] = str[i];
//     }
//     qsort(arr, strlen(str), sizeof(int), cmpfunc);
//     for (int i = 0; i < strlen(str); i++)
//     {
//         printf("%c", arr[i]);
//     }
    
// }

// #include<stdio.h>
// #include<string.h>

// void bubbleSort(char array[], int size) {
//   for (int step = 0; step < size - 1; ++step) {
//     for (int i = 0; i < size - step - 1; ++i) {
//       if (array[i] > array[i + 1]) {
//         int temp = array[i];
//         array[i] = array[i + 1];
//         array[i + 1] = temp;
//       }
//     }
//   }
//   printf("%s", array);
// }

// int main(){
//     char str[200];
//     int arr[200];
//     scanf("%[^\n]", str);
    
//     bubbleSort(str, strlen(str));

//     return 0;
// }

#include <stdio.h>
#include <string.h>

void insertionSort(char arr[][50], int n) {
    int i, j;
    char key[50];
    for (i = 1; i < n; i++) {
        strcpy(key, arr[i]);
        j = i - 1;
        while (j >= 0 && strcmp(arr[j], key) > 0) {
            strcpy(arr[j + 1], arr[j]);
            j = j - 1;
        }
        strcpy(arr[j + 1], key);
    }
}

int main() {
    int n;
    printf("ป้อนจำนวนสตริง: ");
    scanf("%d", &n);

    char strings[n][50];

    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    insertionSort(strings, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
