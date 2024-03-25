#include<stdio.h>

int main(){
    int x, y, r, c, matrix[100][100];
    char ch;

    scanf("%d %c %d", &x, &ch, &y);

    for(r=0;r<x;r++){
        for(c=0;c<y;c++){
            scanf("%d", &matrix[r][c]);
        }
    }
    int min = 10, max, sum = 0, avg;
    printf("Transpost\n");
    for(r=0;r<y;r++){
        for(c=0;c<x;c++){
            printf("%d ", matrix[c][r]);
            if(matrix[c][r] < min){
                min = matrix[c][r];
            }
            else if(matrix[c][r] > max){
                max = matrix[c][r];
            }
            sum += matrix[c][r];
        }
        printf("\n");
    }
    avg = sum/(x*y);
    printf("min: %d\n", min);
    printf("max: %d\n", max);
    printf("sum: %d\n", sum);
    printf("avg: %d\n", avg);

    return 0;
}