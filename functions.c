#include <stdio.h>
void diegosFunction(){
    printf("Being honest is better than been a liar\n");
    printf("lol\n");
    printf("sike");
}
void greeting(char name [20]){
    printf("hello %s ", name);

}
double square(int number){
    double squar = number* number;
    return squar;
}

double power(int base, int exp){
    double x = exp;
    double times = x;
    if(exp == 0){
        return 1;
    }else{
        for(int i = 0; i< exp-1; i++){
            base *= times;
        }
    }
    return base;
}

int main(){

    printf("Testing  power function\n");
    double value = power(3,3);
    printf("power of 3 exp 3: %lf\n", value);
    int va = '9';
    printf("%d\n", va);
    diegosFunction();

    printf("\n");
    char name [] = "diego";
    int number;
    printf("calling greeting function\n");
        greeting(name);

    printf("enter any number");
    scanf("%d", &number);

    printf("the square of %d is %0.f", number, square(number));


    return 0;

}
