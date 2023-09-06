// #include<stdio.h>

// int main(){
//     int num;
//     int half =(num/2)+1;
//     scanf("%d", &num);
//     for(int i=0; i<num; i++){
//         for(int j=0; j<num; j++){
//             if(i == j || (j==num-i-1 && i) || (j==num-i-1 && i == 0)){
//                 printf("-");
//             }
//             else{
//                 printf("#");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include<stdio.h>

int main(){
    int num;
    int half =(num/2)+1;
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            if(j == num-i+1 || i == j){
                printf("-");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}