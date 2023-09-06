#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char arr[300], find;
    int count = 0;
    int arr2[100];
    scanf("%[^\n] %c", arr, &find);
    int len = strlen(arr);
    for (int i = 0; i < len; i++) {
        if (arr[i] == find || arr[i] == toupper(find)){
            arr2[count] = i+1;
            count++; 
        }
        
    }

    if(count == 0){
        printf("Not found.");
    }
    else{
        printf("There is/are %d \"%c\" in the above sentences. \nPosition: ", count, find);
        for (int i = 0; i < count-1; i++)
        {   
            printf("%d, ", arr2[i]);
        }
        printf("%d", arr2[count-1]);
    }
    
    return 0;
}