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

void frt()
{
    for (int r = 0; r < c; r++)
        if (tx[r] == sx && ty[r] == sy)
        {
            delay(1000);
            goto a;
        }
    if (sx < 1 || sx > h || sy < 1 || sy > w)
    {
    a:
        clrscr();
        l = l - 1;
        gotoxy(30, 12);
        textcolor(GREEN);
        cprintf("YOUR LIFE IS:- %d", l);
        g = 1;

        if (g == 1)
            delay(1098);
        clrscr();
        sx = h / 2;
        sy = w / 2;
    }

    if (l < 0)
    {
    gm:
    {
        clrscr();
        gotoxy(36, 12);
        textcolor(BLINK + YELLOW);
        cprintf("GAME OVER");
        delay(2000);
    }
    }
    if (sx == fx && sy == fy)

    {
    q:
        int q;
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
        }

        s = s + 2;
        c = c + 1;
        tm = 20;
    }
    if (sx == ex && sy == ey)

    {
    p:
        int p;
        {
            ex = rand() % h;
            ey = rand() % w;
        }
        if (ex == 1 || ey == 1)
            goto p;
        s = s + 6;
    }
}

void cmd()
{
    if (kbhit())
    {

        switch (getch())
        {
            if (sx < 1 || sx > h || sy < 1 || sy > w)
            {
            }

        case 72:
        {
            b = 0;
        }
        break;
        case 80:
        {
            b = 1;
        }
        break;
        case 75:
        {
            b = 2;
        }
        break;
        case 77:
        {
            b = 3;
        }
        break;
        case 32:
        {
            gotoxy(18, 11);
            system("pause");
        }
        break;
        case 13:
        {
            clrscr();
            gotoxy(32, 11);
            textcolor(LIGHTRED);
            cprintf("RESTART GAME");
            delay(1000);
            l = 3;
            s = 0;
            c = 0;
            sx = h / 2;
            sy = w / 2;
        }
        break;
        case 27:
        {
            clrscr();
            gotoxy(32, 11);
            textcolor(YELLOW + BLUE + BLINK);
            cprintf("EXIT GAME");
            delay(3000);
            exit(0);
        }
        break;
        default:
            break;
        }
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
            frt();
            cmd();
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