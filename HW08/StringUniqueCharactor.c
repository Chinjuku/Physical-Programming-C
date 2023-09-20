#include <stdio.h>
#include <string.h>

char removerepeat (char str[]) {
    char del[100] = "";
    int check1 = 1, check2 = 1;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == str[i+1]) {
            check1 = 0;
            check2 = 0;
        } else if (check1 == 0  && str[i] != str[i+1]) {
            check1 = 1;
        } else {
            del[strlen(del)] = str[i];
            check1 = 1;
        }
    }

    if (check2 == 0) {
        printf("%s\n", del);
        removerepeat(del);
    } else {
        return 0;
    }
}

int main () {
    char str[100];
    scanf("%[^\n]", str);    
    removerepeat(str);
}


