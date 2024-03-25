#include<stdio.h>

int main(){
    int num1, ans, arr[100], count=0;

    // scanf("%d %d", &num1, &ans);
    scanf("%d", &num1);
    // printf("%d", ans*2-num1);
    for(int i=0; i<num1; i++){
        scanf("%d", &ans);
        arr[i] = ans;
        // count++;
    }
    for(int i=0; i<num1; i++){
        printf("%d ", arr[i]);
        // arr[i] = ans;
        // count++;
    }
    
    
    return 0;
}