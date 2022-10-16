#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<time.h>


int main(){

    int dice1;
    int dice2;
    int dice3;
    int dice4;
    int dicef;
    int dicef2;
    char guess;
    int g = 0;
    int f;

    srand(time(0));
    dice1 = (rand()%6)+1;
    dice2 = (rand()%6)+1;
    dice3 = (rand()%6)+1;

    dicef = dice1+dice2+dice3;

    printf("%d\n", dicef);

    do{
        printf("Will next sum be higher or lower[H/L]\n");

        scanf(" %c", &guess);

        if(toupper(guess) == 'H'){

            g = 1;
        }else if (toupper(guess) == 'L'){

            g = 2;
        }else printf("INVALID CHARACTER!\n");
    }while(g == 0);

    dice1 = (rand()%6)+1;
    dice2 = (rand()%6)+1;
    dice3 = (rand()%6)+1;

    dicef2 = dice1+dice2+dice3;

    printf("%d\n", dicef2);

    if(dicef <= dicef2){

        f = 1;
    }else if(dicef > dicef2){

        f = 2;
    }

    if(g == f){
        printf("TRUE");
    }else printf("flase");

    return 0;
}



