#include<stdio.h>

int main(){
    char grade;
    scanf("%c", &grade);
    switch (grade)
    {
    case 'A':
        printf("Genius");
        break;
    case 'a':
        printf("Genius");
        break;
    case 'B':
        printf("Good");
        break;
    case 'b':
        printf("Good");
        break;
    case 'C':
        printf("Try Harder");
        break;
    case 'c':
        printf("Try Harder");
        break;
    case 'D':
        printf("Very Bad");
        break;
    case 'd':
        printf("Very Bad");
        break;
    case 'F':
        printf("Fail");
        break;
    case 'f':
        printf("Fail");
        break;
    default:
        printf("Invalid Input");
    }
        
    return 0;
}

// #include<stdio.h>

// int main(){
//     char grade;
//     scanf("%c", &grade);
    // if(grade == 'A' || grade == 'a'){
    //     printf("Genius");
    // }
    // else if(grade == 'B'){
    //     printf("Good");
    // }
    // else if(grade == 'C'){
    //     printf("Try Harder");
    // }
    // else if(grade == 'D'){
    //     printf("Very Bad");
    // }
    // else if(grade == 'F'){
    //     printf("Fail");
    // }
    // else
    //     printf("Invalid Input");
    // return 0;
//}