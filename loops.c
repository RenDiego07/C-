#include<stdio.h>
#include<stdbool.h>

int main(){
    bool flag = true;
    int counter = 0;
    do{ 
        printf("number %d\n", counter);
        if(counter > 2){
            flag = false;
        }
        counter = counter +1;
    }while(flag);
    return 0;

}