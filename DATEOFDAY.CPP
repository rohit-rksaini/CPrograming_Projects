#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int d,m,y,c,y1,b,m1,a,e,c1,z,x,l;
clrscr();
q:
{
clrscr();
abc:printf("enter date\n");
scanf("%d %d %d" ,&d,&m,&y);
printf("date %d/%d/%d",d,m,y);
if(d>31||m>12)
{
clrscr();
printf("please enter valid date\n\n");
goto abc;
}
if(y>2300)
{
clrscr();
printf("please enter year less than or equal 2300\n");
goto abc;
}
c=y%100;
y1=(c+(c/4))%7;
b=m;
switch(m)
{
case 1:
{
  m1=0;
  break;
  }
  case 2:
  {
  m1=3;
  break;
  }
  case 3:
  {
  m1=3;
  break;
  }
  case 4:
  {
  m1=6;
  break;
  }
  case 5:
  {
  m1=1;
  break;
  }
  case 6:
  {
  m1=4;
  break;
  }
  case 7:
  {
  m1=6;
  break;
  }
  case 8:
  {
  m1=2;
  break;
  }
  case 9:
  {
  m1=5;
  break;
  }
  case 10:
  {
  m1=0;
  break;
  }
  case 11:
  {
  m1=3;
  break;
  }
  case 12:
  {
  m1=5;
  break;
  }
  }
b=(y/100);
e=b*100;
if(e<1700)
{
c1=(18-b)%7;
}
else
{
switch(e)
{
case 1700:
{
  c1=4;
  break;
    }
  case 1800:
  {
  c1=2;
  break;
  }
  case 1900:
  {
  c1=0;
  break;
  }
  case 2000:
  {
  c1=6;
  break;
  }
  case 2100:
  {
  c1=4;
  break;
  }
  case 2200:
  {
  c1=2;
  break;
  }
  case 2300:
  {
  c1=0;
  break;
  }
 }
 }
 x=y1+m1+c1+d;
z=(x)%7;
if((m==(2||3))&&(y%400==0))
{
z=(x-1)%7;
}
printf("\n");
printf("day of date:- ");
switch(z)
{
case 0:
{
  printf("Sunday");
  break;
  }
  case 1:
  {
     printf("Monday");

  break;
  }
  case 2:
  {
    printf("Tuesday");
  break;
  }
  case 3:
  {
     printf("Wednesday");
  break;
  }
  case 4:
  {
   printf("Thursday");
  break;
  }
  case 5:
  {

   printf("Friday");
  break;
  }
  case 6:
  {
  printf("Saturday");
  break;
}
  }    }
  printf("\n\nif any other date   (note:- yes enter 1 or no or exit  enter 0)\n");
scanf("%d",&l);
if(l==1)
{
goto q;
}
else
exit (0);
getch();
}
