#include<stdio.h>
#define ROWS 3
#define COLS 3

int main(){
    float matrix[ROWS][COLS], check = 0, check2 = 0;

    for(int r = 0; r < ROWS; r++)
    {   
        for (int c = 0; c < COLS; c++)
        {
            scanf("%f", &matrix[r][c]);
        }
    }

    for(int r = 0; r < ROWS; r++)
    {   
        for (int c = 0; c < COLS; c++)
        {
            if(r==c){
                if(matrix[r][c] <= 0 || (matrix[1][1] != matrix[2][2]
                || matrix[1][1] != matrix[0][0])){
                    check = 1;
                    break;
                }
            }
            else{
                if(matrix[r][c] != 0){
                    check = 1;
                    break;
                }
            }
        }
    }
    if (check == 1)
    {
        printf("This is not a scalar matrix");
    }
    else{
        printf("This is a scalar matrix");
    }
    


    return 0;
}