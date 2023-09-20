#include<stdio.h>
#include<string.h>

struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

int main(void){
    int num, count = 0;
    char findid[10];
    float com = 0.02;
    scanf("%d", &num);

    struct Record rec[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%s %s %ld %ld", rec[i].id, rec[i].name, &rec[i].salary, &rec[i].sales);
    }

    scanf("%s", findid);
    
    for (int i = 0; i < num; i++)
    {   
        float commission = rec[i].sales*com;
        if(strcasecmp(rec[i].id, findid) == 0){
            printf("%s\n%s\n%ld\n%.2f\n%ld\n%.2f", rec[i].id, rec[i].name, rec[i].sales, commission, rec[i].salary, rec[i].salary+commission);
            count = 1;
        }
    }

    if(count == 0){
        puts("ID not found !!!");
    }
}
