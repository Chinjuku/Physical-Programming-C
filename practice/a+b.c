#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    // int n1, n2;
    // scanf("%d %d", n1,n2);
    // printf("%d", n1+n2);
    char arr[10000];
    scanf("%s", arr);
    int len = strlen(arr), a1=0, a2=0;
    for(int i = 0; i < len; i++){
        if (isupper(arr[i]))
        {
            a1++;
        }
        else if(islower(arr[i])){
            a2++;
        }
    }

    if(a1 == len){
        printf("All Capital Letter");
    }
    else if(a2 == len){
        printf("All Small Letter");
    }
    else{
        printf("Mix");
    }
    return 0;
}