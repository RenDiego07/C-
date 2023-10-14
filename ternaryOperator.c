#include<stdio.h>

int maxValue(int x, int y){
    return (x >y) ? x: y;
}

int main(){
    int number1;
    int number2;

    printf("write any number\n");
    scanf("%d", &number1);
    printf("write any number\n");
    scanf("%d", &number2);
    printf("the largest number between these two is %d ",maxValue(number1, number2));

    number1>number2 ? printf("heloo"): printf("l");
    return 0;
}