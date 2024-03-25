#include<stdio.h>
#include<string.h>

int main(void){
    struct Student_info
    {
        char name[60];
        char surname[60];
        char sex[12];
        int age;
        char id[12];
        float gpa;
    };
    struct Student_info inf;

    scanf("%s %s %s %d %s %f", inf.name, inf.surname, inf.sex, &inf.age, inf.id, &inf.gpa);
    // printf("%d", strcmp(inf.sex, "Male"));
    if(strcmp(inf.sex, "Male") == 0){
        printf("Mr %c %s (%d) ID: %s GPA %.2f", inf.name[0], inf.surname, inf.age, inf.id, inf.gpa);
    }else if(strcmp(inf.sex, "Female") == 0){
        printf("Miss %c %s (%d) ID: %s GPA %.2f", inf.name[0], inf.surname, inf.age, inf.id, inf.gpa);
    }
    
}