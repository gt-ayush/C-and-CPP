#include <stdio.h>

struct Player {
    int health,score;

};

int main() {
    struct Player p1;
    p1.health=100;
    p1.score=0;

    struct Player *ptr = &p1;
    ptr -> score = 50;

    printf("Player Health: [%d] , Score: [%d]",ptr -> health , ptr -> score);

}