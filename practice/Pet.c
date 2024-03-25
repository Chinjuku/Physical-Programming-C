#include<stdio.h>

int main(){
    int score, arr[100], num = 0;
    int doo1=0,c1=0, c2=0, c3=0,c4=0,c5=0;
    int doo2 = 0, doo3=0,doo4=0,doo5=0;
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &score);
        arr[num] = score;
        num++;
    }
    for (int i = 0; i < 20; i++)
    {
        if(i < 4){
            c1 += arr[i];
            doo1 = 1;
        }
        else if(i >= 4 && i < 8){
            c2 += arr[i];
            doo2 = 2;
        }
        else if(i >= 8 && i < 12){
            c3 += arr[i];
            doo3 = 3;
        }
        else if(i >= 12 && i < 16){
            c4 += arr[i];
            doo4 = 4;
        }
        else if(i >= 16 && i < 20){
            c5 += arr[i];
            doo5 = 5;
        }
    }
    if(c1 > c2 && c1 > c3 && c1 > c4 && c1>c5){
        printf("%d %d", doo1, c1);
    }
    else if(c2 > c1 && c2 > c3 && c2 > c4 && c2>c5){
        printf("%d %d", doo2, c2);
    }
    else if(c3 > c1 && c3 > c2 && c3 > c4 && c3>c5){
        printf("%d %d", doo3, c3);
    }
    else if(c4 > c1 && c4 > c2 && c4 > c3 && c4>c5){
        printf("%d %d", doo4, c4);
    }
    else if(c5 > c1 && c5 > c2 && c5 > c3 && c5>c4){
        printf("%d %d", doo5, c5);
    }
    return 0;
}