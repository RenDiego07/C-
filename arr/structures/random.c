#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){
    srand(time(0));

    int rando = (rand()%6); // numbers between 1-6
    printf("%d", rando);
    return 0;
}