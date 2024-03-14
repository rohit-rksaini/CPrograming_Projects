#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
int w = 24, h = 64;
int sx, sy, fx, fy, b, g = 0, l = 3, s = 0, r, a, n, t, q, mn;
int tx[100], ty[100], c = 0, ex, ey, p, tm;

void load()
{

    clrscr();
    int c;
    textcolor(LIGHTGREEN);
    gotoxy(31, 11);
    {
        cprintf("LOADING.......");
    }

    gotoxy(30, 12);
    for (int i = 0; i <= 15; i++)
    {
        textcolor(WHITE);
        cprintf("%c", 177);
    }
    gotoxy(30, 12);

    for (i = 0; i <= 15; i++)
    {
        textcolor(BLUE);
        delay(150);
        cprintf("%c", 177);
    }
}

int main()
{

    load();
}