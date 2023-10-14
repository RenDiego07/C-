#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    float value;
    float result;
    printf("type a positive number : ");
    
    scanf("\n%f", &value);
    result = sqrt(value);
    printf("the square root of %0.2f is %0.2f", value, result);
    
    // pow(base, #power) elevar  --> return double
    // sqrt(double) --> return double

    // round(float)  redondear  --> return double
    // floor(float) funcion piso --> return double
    // ceil(float) funcion techo --> return double
       
    return 0;
}