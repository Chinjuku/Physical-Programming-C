#include<stdio.h>
#include<string.h>

int main(){
    int n, num[100], count = 0;
    char ch[1001];

    for(int i; i<3;i++){
        scanf("%d", &n);
        num[count] = n;
        count++;
    }
    scanf("%s", ch);

    int len = strlen(ch);
    int ind, max, mid;

    for (int i = 0; i < 3; i++)
    {   
        
        if(num[i] < ind){
            ind = num[i];
            // ind = 'A';
            i = 0;
        }
        else if(num[i] > max){
            max = num[i];
            // max = 'C';
            i = 0;
        }
        if (num[i] > ind && num[i] < max){
            mid = num[i];
        }
    }
        // printf("%d ", ch[i]);
    
    printf("%d %d %d", ind, max, mid);

    return 0;
}