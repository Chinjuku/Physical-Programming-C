#include<stdio.h>
#include<math.h>

double grader(double x, double y){
    double grader = sqrt(pow(x, 2) + pow(y, 2));
    return grader;
}
int main(){
    double numx, numy, ans;

    scanf("%lf %lf", &numx, &numy);

    ans = grader(numx, numy);

    int x = numx;
    int y = numy;
    printf("sqrt(%d^2+%d^2)=%.2lf", x, y,ans);
    return 0;
}

// #include<stdio.h>
// #include<math.h>

// int grader(int x, int y){
//     double grader = sqrt(pow(x, 2) + pow(y, 2));
//     return grader;
// }
// int main(){
//     double ans;
//     int numx, numy;
//     scanf("%d %d", &numx, &numy);

//     ans = grader(numx, numy);
    
//     printf("sqrt(%d^2+%d^2)=%.2lf", numx, numy,ans);
//     return 0;
// }