#include<stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j == n/2-i || j == n/2+i || n-i-1 == n/2-j){
                printf("*");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
    
    return 0;
}



// #include<stdio.h>

// int main(){
//     int num, cd, ck[100];
//     scanf("%d", &num);
//     int count = 0, check1, check2;
//     for (int i = 0; i < num; i++)
//     {
//         scanf("%d", &cd);
//         ck[count] = cd;
//         count++;

//     }
//     for (int i = 0; i < count; i++)
//     {
//         // printf("%d", ck[i]);
//         if(ck[i] > check1){
//             check1 = ck[i];
//         }
//         if(ck[i] < check2){
//             check2 = ck[i];
//         }
//     }

//     printf("%d\n%d", check2, check1);
//     return 0;
// }