#pragma once
#include "Dreptunghi.h"
#include "FunctiiUtilitare.h"
#include "JocPvP.h"
#include "JocPvC.h"


bool AmAlesJoaca(int x,int y)
{
    Dreptunghi buton;
    InitDreptunghi(315,431,573,537,buton);
    return (Contine(x,y,buton));
}

void ModJoc()
{
    int x,y;
    bar(0,0,lungimeEcran,latimeEcran);
    readimagefile("gameMode.jpg",0,0,lungimeEcran,latimeEcran);
    Click(x,y);
    if(AmAlesPvP(x,y));
        Nume();
    if (AmAlesPvC(x,y));
        //JocPvC();
}
