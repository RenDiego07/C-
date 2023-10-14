#include <stdio.h>

 get1(){
    return 1;
 }
int main(){
    double calificaciones[] = {2,3,4,5};
    // format specifier lf
        char nombre[] = "Fiego";
        char nombre1[] = "Daniela";
        if((nombre[0] = nombre1[0]) == 'D'){
            printf("xD\n");
        };

    int size = sizeof(calificaciones);
    printf("%s\n", nombre );
    printf("%d\n", size/sizeof(calificaciones[0]));
    int nu = get1();
    printf("%d\n", nu);
    return 0;
}