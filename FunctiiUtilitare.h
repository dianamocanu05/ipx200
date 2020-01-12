#pragma once
#include <graphics.h>
#include <winbgim.h>
#include "Dreptunghi.h"
#define lungimeEcran 1000
#define latimeEcran 800


bool Contine(int x, int y, Dreptunghi d)
{
    return(x>=d.stanga && x<=d.dreapta && y>=d.sus && y<=d.jos);
}

void Click(int &x, int &y)
{
    while(!ismouseclick(WM_LBUTTONDOWN)){}
    getmouseclick(WM_LBUTTONDOWN,x,y);
    clearmouseclick(WM_LBUTTONDOWN);
}
