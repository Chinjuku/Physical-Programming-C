#include<stdio.h>
#include <string.h>
#include<ctype.h>

struct Record {
    char word[455];
};

int main(){
    int check = 0, line = 0, count = 0;
    while(1){
        line++;
        struct Record rec[line];
        scanf(" %[^\n]", rec[line].word);
        // scanf(" %[^\n]s", word);
        // printf("%s+ans", word);
        // if(rec[line].word != " "){
        //     count++;
        // }
        if(strcmp(rec[line].word, ".") == 0){
            break;
        }
        
    }
    printf("%d \n%d", count,line-1);
    return 0;

}