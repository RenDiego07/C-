#include<stdio.h>

void BinarySearch(int array[],int value, int size){   
    int middle = size/2;
    int top, bottom, iterations;
    iterations = 0,bottom = 0;
    top = size;
    while( iterations < size){
        
        if(array[middle] < value){
            bottom = middle;
            middle = middle +(top-bottom) /2;
        }else if( array[middle] > value){
            top = middle; 
            middle = middle- (top-bottom)/2;
        }else{
            printf("The value has been found \n");
            printf("at index %d ", middle);
            break;
        }
        iterations++;
    }

}

int main(){
    int inOrder[] ={0,1,2,3,4,5,6,7,8,9,10,11,12,13};
    BinarySearch(inOrder,12,13);
    
}