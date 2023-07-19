#include<stdio.h>
int main(){
    char firstname[30];
    char lastname[30];
    int idnum;
    int dd, mm, yy;
    float gpa;

    scanf("%s %s %d %d/%d/%d %f", firstname, lastname, &idnum, &dd,&mm,&yy, &gpa);

    printf("Fullname: %s %s\n", firstname, lastname);
    printf("ID: %d\n", idnum);
    printf("DOB: %d-%d-%d\n", dd,mm,yy);
    printf("GPA: %.2f", gpa);
    
    return 0;
}