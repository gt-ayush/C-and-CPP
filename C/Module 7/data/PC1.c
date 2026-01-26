#include <stdio.h>

struct Player {
    int health,level;
};

int main() {
    struct Player val;
    printf("Enter the Health : ");
    scanf("%d",&val.health);
    printf("Enter the Level : ");
    scanf("%d",&val.level);

    printf("Player Health: [%d], Level: [%d]",val.health,val.level);

}