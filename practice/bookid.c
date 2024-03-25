#include <stdio.h>
#include <string.h>

struct Book {
    char id[10];
    char name[100];
    char author[100];
};

int main(){
    int i=0 , num, check = 0;
    char id[10];
    
    scanf("%d %s", &num, id);
    struct Book book[num];
    while(i<num){
        scanf("%s %s %s", book[i].id, book[i].name, book[i].author);
        i++;
    }
    i = 0;
    
    while(i<num){
        // printf("%s %s", id, book[i].id);
        if(strcmp(id, book[i].id) == 0){
            printf("%s %s %s", book[i].id, book[i].name, book[i].author);
            check = 1;
        }
        i++;
    }

    if (check == 0)
    {
        printf("Not Found");
    }
 return 0;
}