#include<stdio.h>
#include<string.h>

int main(){
    char arr[200], str[] = "abxypqrmncedkljoshtufvzgwi";

    scanf("%[^\n]", arr);

    int size = strlen(arr);
    int strsize = strlen(str);

    for (int i = 0; i < size; i++)
    {
        for(int j=0; j<strsize;j++){
            if(j >= 5){
                if(arr[i] == str[j]){
                    printf("%c", str[j-5]);
                }
                else if(arr[i] == str[j] - 32){
                    printf("%c", str[j-5] - 32);
                }
            }else{
                if(arr[i] == str[j]){
                    printf("%c", str[j+21]);
                }
                else if(arr[i] == str[j] - 32){
                    printf("%c", str[j+21] - 32);
                }
            }
            if(arr[i] == ' '){
                printf(" ");
                break;
            }
        }
    }
    

    return 0;
}