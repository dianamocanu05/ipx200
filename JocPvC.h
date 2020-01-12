#pragma once
#include "Dreptunghi.h"

bool AmAlesPvC(int x, int y)
{
    Dreptunghi buton;
    InitDreptunghi(501,0,lungimeEcran,latimeEcran,buton);
    return (Contine(x,y,buton));
}
