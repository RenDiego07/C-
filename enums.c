#include <stdio.h>
#include <string.h>
enum Day {Monday,tuesday,wed,thursday,fridayyy};
const double pi = 3.14;
const char user[] = "DIEGO FLORES"; 
int main(){

    enum Day today = Monday;
    if( today == Monday){
        printf("i've got to work today\n");
    }
    printf("%.2lf\n", pi);
    printf ("%d\n",strlen(user) );
    int v = 0;
    if(!v){
        printf("hola Crkac");

    }
    
    return 0;
    
}