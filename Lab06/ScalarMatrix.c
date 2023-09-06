#include <stdio.h>
#define ROWS 3
#define COLS 3

int main() {
    float matrix[ROWS][COLS];
    float ans[ROWS][COLS];
    float cal = 0.0;
    int r, c, count = 0, count1 = 0;
    
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            scanf("%f", &matrix[r][c]);
        }
    }
    
    float val = matrix[0][0];
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            if (r == c){
              if (matrix[r][c] == val){
                   count = 1;
              }else{
                  count = 0;
                  break;
              }
            }else{
                if (matrix[r][c] != 0) {
                    count = 0;
                    break;
                }
            }
        }
        if (count == 0){
            break;
        }
    }
    if(count == 1){
        printf("This is a scalar matrix");
    }else{
        printf("This is not a scalar matrix");
    }
    return 0;
}