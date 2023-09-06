#include <stdio.h>
#define ROWS 3
#define COLS 3

int main() {
    float mA[ROWS][COLS];
    float mB[ROWS][COLS];
    float ans[ROWS][COLS];
    int r, c;
    
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            scanf("%f", &mA[r][c]);
        }
    }
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            scanf("%f", &mB[r][c]);
        }
    }

    printf("A x B\n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            // printf("(%d-%d)\n", r, c);
            if(r == 0 && c == 0){
                float m = (mA[0][0] * mB[0][0]) + (mA[0][1] * mB[1][0]) +
                (mA[0][2] * mB[2][0]);
                printf("%.2f ", m);
            }
            else if(r == 0 && c == 1){
                float m = (mA[0][0] * mB[0][1]) + (mA[0][1] * mB[1][1]) +
                (mA[0][2] * mB[2][1]);
                printf("%.2f ", m);
            }
            else if(r == 0 && c == 2){
                float m = (mA[0][0] * mB[0][2]) + (mA[0][1] * mB[1][2]) +
                (mA[0][2] * mB[2][2]);
                printf("%.2f \n", m);
            }
            else if(r == 1 && c == 0){
                float m = (mA[1][0] * mB[0][0]) + (mA[1][1] * mB[1][0]) +
                (mA[1][2] * mB[2][0]);
                printf("%.2f ", m);
            }
            else if(r == 1 && c == 1){
                float m = (mA[1][0] * mB[0][1]) + (mA[1][1] * mB[1][1]) +
                (mA[1][2] * mB[2][1]);
                printf("%.2f ", m);
            }
            else if(r == 1 && c == 2){
                float m = (mA[1][0] * mB[0][2]) + (mA[1][1] * mB[1][2]) +
                (mA[1][2] * mB[2][2]);
                printf("%.2f \n", m);
            }
            else if(r == 2 && c == 0){
                float m = (mA[2][0] * mB[0][0]) + (mA[2][1] * mB[1][0]) +
                (mA[2][2] * mB[2][0]);
                printf("%.2f ", m);
            }
            else if(r == 2 && c == 1){
                float m = (mA[2][0] * mB[0][1]) + (mA[2][1] * mB[1][1]) +
                (mA[2][2] * mB[2][1]);
                printf("%.2f ", m);
            }
            else if(r == 2 && c == 2){
                float m = (mA[2][0] * mB[0][2]) + (mA[2][1] * mB[1][2]) +
                (mA[2][2] * mB[2][2]);
                printf("%.2f ", m);
            }
            
        }
    }

    return 0;
}