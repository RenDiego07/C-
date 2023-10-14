#include<stdio.h>

int main(){
     int numbers [3][5] = {
         {1,2,4,3,2},
         {5,6,7,3,2},
         {11,9,10,3,1}
        };
    int columns =  (sizeof(numbers[0])/sizeof(numbers[0][0]));
    int rows = sizeof(numbers)/ sizeof(numbers[0]);
    printf("return the number of columns: %d\n ", columns);
    printf("return the number of rows: %d\n", rows);


    // define an array of strings
    int values [4];
    char names [] [10] = {"Diego", "jaime", "edu"};
    for(int x = 0; x<sizeof(values) / sizeof(values[0]); x++){
        printf("%d\n", x);
        int cp = x;
        values[x] = ++cp;
    }
    printf("print array\n");
    for(int y = 0; y<sizeof(values)/ sizeof(values[0]); y++){
        printf("%d\n", values[y]);
    } 
    return 0;

    // when working with arrays is not enough to use = 
    //instead we ought to use strcpy function 
}