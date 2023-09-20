// #include<stdio.h>
// #include<string.h>

// struct Weather {
//     char outlook[9]; //outlook{overcast,sunny,rain}
//     int temperature;
//     int humidity;
//     char wind; //wind{T,F}
// };

// void playing_decision(struct Weather weather[],int num){
//     for(int i=0; i < num;i++){
//         struct Weather current_weat = weather[i];
//         if(strcmp(current_weat.outlook,"overcast") == 0)
//         {
//             printf("yes\n");
//         }
//         else if(strcmp(current_weat.outlook,"rain") == 0)
//         {
//             if(current_weat.wind == 'F'){
//                 printf("yes\n");
//             }
//             else{
//                 printf("no\n");
//             }
//         }
//         else if(strcmp(current_weat.outlook,"sunny") == 0){
//             if(current_weat.humidity > 77.5){
//                 printf("no\n");
//             }
//             else{
//                 printf("yes\n");
//             }
//         }
//     }
// }

// int main(){
//     int num;
//     scanf("%d", &num);
//     struct Weather weather[num];
//     for (int i = 0; i < num; i++)
//     {
//         scanf("%s %d %d %c", weather[i].outlook, &weather[i].temperature, &weather[i].humidity, &weather[i].wind);
//     }
//     playing_decision(weather, num);   

//     return 0;
// }

#include<stdio.h>
#include<string.h>

struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};

void playing_decision(struct Weather weather[],int num){
    if(strcmp(weather[num].outlook,"overcast") == 0)
    {
        printf("yes\n");
    }
    else if(strcmp(weather[num].outlook,"rain") == 0)
    {
        if(weather[num].wind == 'F'){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    else if(strcmp(weather[num].outlook,"sunny") == 0){
        if(weather[num].humidity > 77.5){
            printf("no\n");
        }
        else{
            printf("yes\n");
        }
    }
}

int main(){
    int num;
    scanf("%d", &num);
    struct Weather weather[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%s %d %d %c", weather[i].outlook, &weather[i].temperature, &weather[i].humidity, &weather[i].wind);
    }
    
    for(int i=0; i < num;i++){
        struct Weather current_weat = weather[i];
        if(strcmp(current_weat.outlook,"overcast") == 0)
        {
            printf("yes\n");
        }
        else if(strcmp(current_weat.outlook,"rain") == 0)
        {
            if(current_weat.wind == 'F'){
                printf("yes\n");
            }
            else{
                printf("no\n");
            }
        }
        else if(strcmp(current_weat.outlook,"sunny") == 0){
            if(current_weat.humidity > 77.5){
                printf("no\n");
            }
            else{
                printf("yes\n");
            }
        }
    }

    return 0;
}






