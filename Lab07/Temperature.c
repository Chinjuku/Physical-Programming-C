#include<stdio.h>
#include <ctype.h>

double celsiusToFahrenheit(double celcius){
    return 32 + (celcius*1.8);
}
double fahrenheitToCelcius(double fahrenheit){
    return (fahrenheit-32)/1.8;
}
void printFarenheit(double fahrenheit){
    printf("%.2lf f", fahrenheit);
}
void printCelcius(double celcius){
    printf("%.2lf c", celcius);
}

int main(){
    double temp;
    char ch;

    scanf("%lf %c", &temp, &ch);
    if (tolower(ch) == 'c'){
        double fah = celsiusToFahrenheit(temp);
        printFarenheit(fah);
    }
    else if (tolower(ch) == 'f'){
        double cel = fahrenheitToCelcius(temp);
        printCelcius(cel);
    }


    return 0;
}