#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main () {

    typedef struct monster{
        char name;
        int hp;
        int atk;
        int def;
        int eval;
    } Monster;

    //Recieve and assign monster count
    int monsterCount;
    scanf("%d", &monsterCount);
    int monsters[monsterCount];

    for (int i = 0; i < monsterCount; i++) {
        
    }
}