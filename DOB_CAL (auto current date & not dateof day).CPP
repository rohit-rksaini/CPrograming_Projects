#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
int d2,m2,y2,l;
struct date t;
getdate(&t);
g:
{
clrscr();
xyz:printf("todays date  %d/%d/%d",t.da_day,t.da_mon,t.da_year);
printf("\nenter date of birth(dd/mm/yy) format\n");
scanf("%d %d %d" ,&d2,&m2,&y2);
printf("your date of birth %d/%d/%d\n",d2,m2,y2);
if((d2>31)||(m2>12)||(y2>t.da_year)||(t.da_year==y2&&t.da_day<d2&&t.da_mon<=m2)||(t.da_year==y2&&t.da_mon<m2&&t.da_day>=d2))
{
clrscr();
printf("please enter valid date of birth \n\n");
goto xyz;
}
if(t.da_day<d2)
{
t.da_day=(t.da_day+31)-d2;
t.da_mon=t.da_mon-1;
}
else
{
t.da_day=t.da_day-d2;
}
if(t.da_mon<m2)
{
t.da_mon=(t.da_mon+12)-m2;
t.da_year=t.da_year-1;
}
else
{
t.da_mon=t.da_mon-m2;
}
t.da_year=t.da_year-y2;
printf("\nyou are year= %d, month= %d, days= %d  old\n",t.da_year,t.da_mon,t.da_year);
}
printf("\nif any other note:- yes enter 1 or exist or no enter 0 \n");
scanf("%d",&l);
if(l==1)
goto g;
else
exit(0);
getch();
}