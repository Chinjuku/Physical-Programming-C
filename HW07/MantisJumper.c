#include<stdio.h>

int sum(int k){
    if (k > 0){
        int arr[101] = {1, 2}, ans;
        for (int i = 0; i < k; i++){
            if(i > 1){
                arr[i] = arr[i-1] + arr[i-2];
                ans = arr[k-1];
            }
        }
        return ans;
    }
    else{
        return 0;
    }
}

int main(){
    int n, num;
    scanf("%d", &n);

    num = sum(n);
    printf("method = %d", num);

    return 0;
}