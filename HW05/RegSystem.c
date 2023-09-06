#include<stdio.h>
 
int main(){
    float count6 = 0, count7 =0;
    int i = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0,
        age, height, weight;
    for(int i=0; i<50;i++){
        scanf("%d %d %d", &age, &height, &weight);
        count5+=age;
        count6+=height;
        count7+=weight;
        if(age>=20 && height >=160){
            count1++;
        }if(age<20 && (height<=180 || weight>=60)){
            count2++;
        }if(age>=30 && weight>=40 && weight<=80){
            count3++;
        }if(age<40 && (weight<85 || height<=200)){
            count4++;
        }
    }
    printf("Age >= 20 and Height >= 160: %d\n", count1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", count2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", count3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", count4);
    printf("Average Age: %d\n", count5/50);
    printf("Average Height: %.2f\n", count6/50);
    printf("Average Weight: %.2f", count7/50);
 
    return 0;
}