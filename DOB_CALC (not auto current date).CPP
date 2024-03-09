#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
void main()
{
  int d2, m2, y2, c, k, b, m, a, e, c1, z, x, l, i, j, o;
  clrscr();
  struct date t;
  getdate(&t);
q:
{
  clrscr();
  i = t.da_day;
  j = t.da_mon;
  o = t.da_year;
xyz:
  printf("todays date  %d/%d/%d", t.da_day, t.da_mon, t.da_year);
  printf("\nenter date of birth(dd/mm/yy) format\n");
  scanf("%d %d %d", &d2, &m2, &y2);
  printf("your date of birth %d/%d/%d\n", d2, m2, y2);
  if ((d2 > 31) || (m2 > 12) || (y2 > o) || (o == y2 && i < d2 && j <= m2) || (o == y2 && j < m2 && i >= d2))
  {
    clrscr();
    printf("please enter valid date of birth \n\n");
    goto xyz;
  }
  if (i < d2)
  {
    i = (i + 31) - d2;
    j = j - 1;
  }
  else
  {
    i = i - d2;
  }
  if (j < m2)
  {
    j = (j + 12) - m2;
    o = o - 1;
  }
  else
  {
    j = j - m2;
  }
  o = o - y2;
  printf("\nyou are year= %d, month= %d, days= %d  old", o, j, i);

  //  start program find day of the given day

  c = y2 % 100;
  k = (c + (c / 4)) % 7;
  b = m2;
  switch (m2)
  {
  case 1:
  {
    m = 0;
    break;
  }
  case 2:
  {
    m = 3;
    break;
  }
  case 3:
  {
    m = 3;
    break;
  }
  case 4:
  {
    m = 6;
    break;
  }
  case 5:
  {
    m = 1;
    break;
  }
  case 6:
  {
    m = 4;
    break;
  }
  case 7:
  {
    m = 6;
    break;
  }
  case 8:
  {
    m = 2;
    break;
  }
  case 9:
  {
    m = 5;
    break;
  }
  case 10:
  {
    m = 0;
    break;
  }
  case 11:
  {
    m = 3;
    break;
  }
  case 12:
  {
    m = 5;
    break;
  }
  }
  b = (y2 / 100);
  e = b * 100;
  if (e < 1700)
  {
    c1 = (18 - b) % 7;
  }
  else
  {
    switch (e)
    {
    case 1700:
    {
      c1 = 4;
      break;
    }
    case 1800:
    {
      c1 = 2;
      break;
    }
    case 1900:
    {
      c1 = 0;
      break;
    }
    case 2000:
    {
      c1 = 6;
      break;
    }
    case 2100:
    {
      c1 = 4;
      break;
    }
    case 2200:
    {
      c1 = 2;
      break;
    }
    case 2300:
    {
      c1 = 0;
      break;
    }
    }
  }
  x = k + m + c1 + d2;
  z = (x) % 7;
  if ((m == (2 || 3)) && (y2 % 400 == 0))
  {
    z = (x - 1) % 7;
  }
  printf("\n");
  printf("\nday of your birth is :- ");
  switch (z)
  {
  case 0:
  {
    printf("sunday");
    break;
  }
  case 1:
  {
    printf("monday");

    break;
  }
  case 2:
  {
    printf("tuesday");
    break;
  }
  case 3:
  {
    printf("wednesday");
    break;
  }
  case 4:
  {
    printf("thursday");
    break;
  }
  case 5:
  {
    printf("friday");
    break;
  }
  case 6:
  {
    printf("saturday");
    break;
  }
  }
}
  printf("\n\nif any other   (note:- yes enter 1 or no or exit  enter 0)\n");
  scanf("%d", &l);

  if (l == 1)
  {
    goto q;
  }
  else
    exit(0);

  getch();
}