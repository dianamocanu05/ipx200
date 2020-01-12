#pragma once
#include "Dreptunghi.h"
#include <cstdio>
char nume1[20],nume2[20];

bool AmAlesPvP(int x, int y)
{
    Dreptunghi buton;
    InitDreptunghi(0,0,lungimeEcran/2,latimeEcran,buton);
    return (Contine(x,y,buton));
}

void AfiseazaNume(int x, int y, char nume[20], char c)
{
    setfillstyle(SOLID_FILL,BLACK);
    bar(0,0,lungimeEcran,latimeEcran);
    outtextxy(50,100,"Introdu numele jucatorilor:");
    outtextxy(50,200,"Player 1:");
    outtextxy(50,300,"Player 2: ");
    outtextxy(350,200,nume1);
    //std::cout<<std::endl<<c<<std::endl;
    if(isalnum(c))
    {
        char buffer[2];
        buffer[0]=c;
        buffer[1]='\0';
        strcat(nume, buffer);
       // std::cout<<std::endl<<buffer<<std::endl;
        outtextxy(x,y,nume);
    }
}

void IntroduNume(int x, int y, char nume[20])
{
    while(1)
    {
        char c=getch();
        //std::cout<<std::endl<<c<<std::endl;
        if(c==13) //enter
            break;
        else if(c==8)
            {if(strlen(nume))
                {nume[strlen(nume)-1]='\0';
                 bar(0,0,lungimeEcran,latimeEcran);
                 outtextxy(50,100,"Introdu numele jucatorilor:");
                 outtextxy(50,200,"Player 1:");
                 outtextxy(50,300,"Player 2: ");
                 outtextxy(350,200,nume1);
                 outtextxy(x,y,nume);}
            }
        else
            AfiseazaNume(x,y,nume,c);
    }

}

void Nume()
{
    cleardevice();
    settextstyle(0,0,4);
    setcolor(MAGENTA);
    outtextxy(50,100,"Introdu numele jucatorilor:");
    outtextxy(50,200,"Player 1:");
    outtextxy(50,300,"Player 2: ");
    IntroduNume(350,200,nume1);
    outtextxy(350,200,nume1);
    IntroduNume(350,300,nume2);

    if(strlen(name1) && strlen(name2))
        JocPvP();
}

void Update()
{
    int x,y,linie,coloana;
    DeseneazaTabla();
    DeseneazaPiese();
    Click(x,y);
    marimePiesa=AlegePiesa(x,y,playerCurent);
    //selecteaza de pe tabla
    //matrice
    Click(x,y);
    AlegeUndePeTabla(linie,coloana);
    PlaseazaPiesa(linie,coloana,marimePiesa);

}

void JocPvP()
{
    playerCurent=1;
    while(1)
        Update();
}


