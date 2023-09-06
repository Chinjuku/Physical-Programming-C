#include<stdio.h>
#include<math.h>

double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}

double findAvg(double array[], int size){
    double count = 0, avg;
    for(int i = 0; i<size; i++){
        count += array[i];
    }
    avg = count/size;
    return avg;
}

double findMax(double array[], int size){
    double max;
    for(int i = 0; i<size; i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    return max;
}

double findMin(double array[], int size){
    double min;
    for(int i = 0; i<size; i++){
        if(min > array[i]){
            min = array[i];
        }
    }
    return min;
}

int main() {
    int n;
    scanf("%d", &n);
    
    double array[n];
    for (int i=0; i<n; ++i) {
        array[i] = getValue();
    }
    
    double min, max, avg;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);
    printf("%d Values\nMin: %.3lf\n", n, min);
    printf("Max: %.3lf\n", max);
    printf("Avg: %.3lf\n", avg);

    return 0;
}