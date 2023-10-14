#include <stdio.h>
#include <string.h>    
int main(){
    char String [] = "Diego";
    char firstName [] = "flores";
    //-------------------------------
    printf("%s\n",strlwr(String));
    printf("%s\n",strupr(String));
    printf("lenght of firstName is %d\n ", strlen(firstName));


    // output int 
    //function --> strcmp(----,----) return 0 if both values are the same
                //--> strcmpi (----,----) ignore case    
    //------------------------------
    



    printf("%s\n",strcat(String, firstName) );
    
    printf("%s\n",strncat(String, firstName, 1) );

    printf("%s\n",strcat(firstName, String) );


    
    return 0;
}