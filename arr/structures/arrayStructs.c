#include <stdio.h>

struct student {
    char name [20];
    float GPA ;

};
int main(){

    struct student st1 ={"Diego", 3.0};
    struct student st2 ={"Topo", 3.5};

    struct student students [2] = {st1,st2};
    printf("%d\n", sizeof(students[0]));
    
    return 0; 
}
