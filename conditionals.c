#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int grade = 6;
    char input = 'c';
    input = toupper(input);
    printf("%c\n", input);
        switch(grade){
        case 5:
            printf("you failed\n");
            break;
        case 6:
            printf("you pass, great :D\n");
            break;
        default:
            printf("was entered a wrong grade, try again\n");

    }
    printf("i run\n");
    printf("occasionaly");
    return 0;
}