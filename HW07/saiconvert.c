#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char arr1[101], arr2[101];

    scanf("%[^\n] %[^\n]", arr1, arr2);
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);

    printf("*** Results ***\n");

    for (int i = 0; i < len1; i++) {
        if (islower(arr1[i])) {
            printf("%c", toupper(arr1[i]));
        } else if (isupper(arr1[i])) {
            printf("%c", tolower(arr1[i]));
        } else {
            printf("%c", arr1[i]);
        }
        arr1[i] = tolower(arr1[i]);
    }
    printf("\n");

    for (int j = 0; j < len2; j++) {
        if (islower(arr2[j])) {
            printf("%c", toupper(arr2[j]));
        } else if (isupper(arr2[j])) {
            printf("%c", tolower(arr2[j]));
        } else {
            printf("%c", arr2[j]);
        }
        arr2[j] = tolower(arr2[j]);
    }
    printf("\n***************\n");

    if (strcmp(arr1, arr2) == 0) {
        printf("Both strings are the same.\n");
    } else {
        printf("Both strings are not the same.\n");
    }

    return 0;
}