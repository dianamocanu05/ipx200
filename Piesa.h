#pragma once
#include "Dreptunghi.h"
struct Piesa{
dreptunghi d;
int dimensiune;
int contor;
};

struct Player{

    char nume[20];
    Piesa piese[3];
}player1,player2;

void AlegePiesa(int x, int y,int playerCurent)
{
    if(playerCurent==1)
    {
        for(i=0;i<3;i++)
            if(Contine(x,y,player1.piese[i].d) && player1.piese[i].contor)
            {
                player1.piese[i].contor--;
                return player1.piese[i].dimensiune;
            }
    }

    else
    {
        for(i=0;i<3;i++)
            if(Contine(x,y,player2.piese[i].d) && player2.piese[i].contor)
            {
                player2.piese[i].contor--;
                return player2.piese[i].dimensiune;
            }

    }

}

void PlaseazaPiesa(int )
