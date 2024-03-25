#include<string.h>
#include<stdio.h>

struct Book {
    char id[10];
    char name[100];
    char author[100];
};

int main(){
    int num;
    char check[10];
    
    scanf("%d %s", &num, check);

    struct Book book[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%s %s %s", book[i].id, book[i].name, book[i].author); 
    }
    int count = 0;
    for (int i = 0; i < num; i++)
    {
        if(strcmp(check, book[i].id) == 0){
            printf("%s %s %s", book[i].id, book[i].name, book[i].author);
            count = 1;
        }
    }
    if(count == 0){
        printf("Not Found");
    }
    return 0;
}