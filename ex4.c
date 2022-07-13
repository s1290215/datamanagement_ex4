/*  head tail game  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int num, i, cnt_head = 0, cnt_tail = 0;
    unsigned int seed;

    seed = (unsigned int)time(NULL);
    srand(seed);
    
    printf("Tossing a coin...\n");
    
    for(i = 0; i < 3; i++){
        num = rand() % 2;

        if(num == 0){
            printf("Round %d: Heads\n", i + 1);
            cnt_head++;
        }
        else{
            printf("Round %d: Tails\n", i + 1);
            cnt_tail++;
        }
    }

    printf("Heads: %d, Tails: %d\n", cnt_head, cnt_tail);
}
