#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>
void main(void)
{
   start:
   int gdriver = DETECT, gmode;
   initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
   int q[9][9]={2,4,8,3,9,5,7,1,6,5,7,1,6,2,8,3,4,9,9,3,6,7,4,1,5,8,2,6,8,2,5,3,9,1,7,4,3,5,9,1,7,4,6,2,8,7,1,4,8,6,2,9,5,3,8,6,3,4,1,7,2,9,5,1,9,5,2,8,6,4,3,7,4,2,7,9,5,3,8,6,1};
   int a[9][9]={0,4,0,3,9,0,0,1,6,0,7,1,6,0,8,3,4,9,9,3,0,7,4,0,0,8,2,6,0,2,5,3,9,0,7,4,3,0,0,0,7,0,6,2,0,7,1,4,0,0,0,9,5,0,8,6,0,0,0,7,2,0,5,1,9,0,0,8,0,4,0,0,4,2,0,0,5,0,8,6,1};
   moveto(250,0);
   setcolor(15);
   moveto(0, 10);
   outtext("HOW TO PLAY SUDOKU");
   moveto(0, 20);
   outtext("Fill the grid so that every horizontal row, every vertical column and every 3*3");
   moveto(0, 30);
   outtext("box contains the digits 1-9, without repeating the numbers in the same row,");
   moveto(0, 40);
   outtext("column or box. You can't change the digits already given in the grid.");
   moveto(0, 50);
   outtext("Every puzzle has one solution.");
   moveto(0,60);
   int rx1=150;
   int rx2=180;
   int ry1=100;
   int ry2=130;
   do
   {
   setcolor(12);
   rectangle(150,100,420,370);
   line(240,100,240,370);
   line(330,100,330,370);
   line(150,190,420,190);
   line(150,280,420,280);
   setcolor(02);
   line(150+30,100,150+30,370);
   line(150+60,100,150+60,370);
   line(240+30,100,240+30,370);
   line(240+60,100,240+60,370);
   line(330+30,100,330+30,370);
   line(330+60,100,330+60,370);
   line(150,100+30,420,100+30);
   line(150,100+60,420,100+60);
   line(150,190+30,420,190+30);
   line(150,190+60,420,190+60);
   line(150,280+30,420,280+30);
   line(150,280+60,420,280+60);
   char b[1];
   setcolor(15);
   rectangle(rx1,ry1,rx2,ry2);
    for(int i=150,k=0;i<450-30;i+=30,k++)
   {

   for(int j=100,l=0;j<400-30;j+=30,l++)
   {
   moveto(i+20,j+20);
   int x=a[l][k];
   if (x!=0)
   {
   setcolor(15);
   sprintf(b,"%d",x);
   outtext(b);
   }
   }
   }
   moveto(250, 0);
   outtext("SUDOKU.");
   moveto(0, 60);
   outtext("Enter e to exit the game. Enter c to check after completion.");
   moveto(0, 70);
   outtext("Press w to move up, s to move down");
   outtext("Press a to move left, d to move right");
   char m=getch();
   if (m=='d')
   {
   if (rx2==420)
   continue;
   else
   {
   cleardevice();
   rx1+=30;
   rx2+=30;
   continue;
   }
   }
   else if (m=='a')
   {
   if (rx1==150)
   continue;
   else
   {
   cleardevice();
   rx1-=30;
   rx2-=30;
   continue;
   }
   }
   else if (m=='w')
   {
   if (ry1==100)
   continue;
   else
   {
   cleardevice();
   ry1-=30;
   ry2-=30;
   continue;
   }
   }
   else if (m=='s')
   {
   if (ry2==370)
   continue;
   else
   {
   cleardevice();
   ry1+=30;
   ry2+=30;
   continue;
   }
   }
   else if(m=='e')
   exit(0);
   else if(m=='1')
   {
   int x11=((rx1-150)/30);
   int y11=((ry2-100)/30)-1;
   if (a[y11][x11]==0)
   {
   a [y11][x11]=1;
   }
   continue;
   }
     else if(m=='2')
   {
   int x11=((rx1-150)/30);
   int y11=((ry2-100)/30)-1;
   if (a[y11][x11]==0)
   {
   a [y11][x11]=2;
   }
   continue;
   }
     else if(m=='3')
   {
   int x11=((rx1-150)/30);
   int y11=((ry2-100)/30)-1;
   if (a[y11][x11]==0)
   {
   a [y11][x11]=3;
   }
   continue;
   }
     else if(m=='4')
   {
   int x11=((rx1-150)/30);
   int y11=((ry2-100)/30)-1;
   if (a[y11][x11]==0)
   {
   a [y11][x11]=4;
   }
   continue;
   }
     else if(m=='5')
   {
   int x11=((rx1-150)/30);
   int y11=((ry2-100)/30)-1;
   if (a[y11][x11]==0)
   {
   a [y11][x11]=5;
   }
   continue;
   }
     else if(m=='6')
   {
   int x11=((rx1-150)/30);
   int y11=((ry2-100)/30)-1;
   if (a[y11][x11]==0)
   {
   a [y11][x11]=6;
   }
   continue;
   }
     else if(m=='7')
   {
   int x11=((rx1-150)/30);
   int y11=((ry2-100)/30)-1;
   if (a[y11][x11]==0)
   {
   a [y11][x11]=7;
   }
   continue;
   }
     else if(m=='8')
   {
   int x11=((rx1-150)/30);
   int y11=((ry2-100)/30)-1;
   if (a[y11][x11]==0)
   {
   a [y11][x11]=8;
   }
   continue;
   }
     else if(m=='9')
   {
   int x11=((rx1-150)/30);
   int y11=((ry2-100)/30)-1;
   if (a[y11][x11]==0)
   {
   a [y11][x11]=9;
   }
   continue;

   }
   else if(m=='c')
   break;
   else if(m=='r')
   goto start;
   } while(1);
   int f=1;
   for (int i1=0;i1<9;i1++)
   for (int j1=0;j1<9;j1++)
   {
   if (a[i1][j1]!=q[i1][j1])
   f=0;
   if (a[i1][j1]==0)
   f=2;
   }
   if(f==0)
   {
   moveto(100,400);
   outtext("Invalid!");
   }
   else if(f==1)
   {
   moveto(100,400);
   outtext("Awesome! You succeeded!");
   }
   else if(f==2)
   {
   moveto(100,400);
   outtext("Incomplete Puzzle!");
   }
   moveto(100,410);
   outtext("Enter r to retry. Enter e to exit");
   char d=getch();
   if (d=='r')
   goto start;
   else if (d=='e')
   exit(0);
   }
