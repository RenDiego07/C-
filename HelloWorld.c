#include <stdio.h>
#include<stdbool.h>
#include <string.h>
#include<math.h>
int main(){
    //printf("Estamos haciendo algo de progreso\n"); 
    //printf("J'm appelle Diego, j'ai vingt ans\n ");

    //printf("\"cap 20\" ");

    int x; // declaration
    x = 20;
    int result = x+10;
    char grade = 'C';

    char name[] = "entonces asi se hace todo"; //array of characters
    char digit = 0;
    float promedio = 20.123;
    bool flag = true;
    float gradee = 20.124;
    
    //printf("%i", result);
    //printf("\n");
    //printf("goo\n");

    //printf("%s", name);

    //printf("%i\n", x);
    //printf("mi grado fue de %i\n", grade);
    //printf("vamos a imprimir una frase %s\n", name);
    //printf("%f\n", digit);
    //printf("el promedio fue de %0.2f\n", promedio);
    //printf("all women lie %d\n", flag);
    //printf("grade %0.2f\n",gradee );
    

    int age;
    char fullName[40];
    printf("\nwrite your full name: ");
    fgets(fullName, 40 , stdin); // via this function it accepts inputs with blank spaces
    fullName[strlen(fullName)-1] = '\0';
    printf("\ncuantos anios tienes\n");
    scanf("%d", &age); // function only used in case the input has no spaces
    printf("yo tengo %d anios", age);



    printf("\nmy full name is %s and i love ppizza", fullName);


    return 0;


    
}
