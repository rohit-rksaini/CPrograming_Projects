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

void in()
{
    sx = h / 2;
    sy = w / 2;
q:
{
    fx = rand() % h;
    fy = rand() % w;
}
    if (fx == 1 || fy == 1)
        goto q;
    if (fx <= 10)
    {
        fx = fx + 11;
    }
    if (fy <= 10)
    {
        fy = fy + 11;
    p:
    {
        ex = rand() % h;
        ey = rand() % w;
    }
        if (fx == 1 || fy == 1)
            goto p;
    }
}

void run()
{
    int px, py, jy, jx, r;
    px = tx[0];
    py = ty[0];
    tx[0] = sx;
    ty[0] = sy;
    for (int n = 1; n < c; n++)
    {
        jx = tx[n];
        jy = ty[n];
        tx[n] = px;
        ty[n] = py;
        px = jx;
        py = jy;
    }

    switch (b)
    {
    case 0:
    {
        sy--;
        delay(50);
    }
    break;
    case 1:
    {
        sy++;
        delay(50);
    }
    break;
    case 2:
    {
        sx--;
    }
    break;
    case 3:
    {
        sx++;
    }
    break;
    default:
        exit(0);
        break;
    }
}

int main()
{

    load();
u:
{
    in();
    while (l > -1)
    {
        delay(100);
        {
            run();
        }
    }
}
    clrscr();
    gotoxy(36, 12);
    textcolor(RED + WHITE);
    cprintf("TRY  AGAIN 1");
    scanf("%d", &mn);
    l = 3;
    s = 0;
    c = 0;

    if (mn == 1)
    {
        goto u;
    }
    else
    {
        exit(0);
    }
    return 0;
}