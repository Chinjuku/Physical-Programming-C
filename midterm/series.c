#include<stdio.h>

int main(){
    int num, count = 1, i = 1, arr[100000];

    scanf("%d", &num);

    while(count <= num){
        arr[i] = count;
        count += i;
        count++;
        i++;
    }

    for (int j = 0; j < i-1; j++)
    {
        printf("%d,", arr[j]);
    }
    printf("%d", arr[i-1]);
    


    return 0;
}