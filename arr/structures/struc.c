#include <stdio.h>

#include <string.h>

struct Player{

    char name [12];
    int score ;
};

int main(){
    struct Player player1;
    struct Player player2 = {"Topo",100};
    strcpy(player1.name, "Diego");
    printf(" name for player1 : --> %s\n",player1.name );

        
    return 0;
}