#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "next tick.h"
#include "print.h"
#include "dead.h"

int main()
{
    int choice,it;
    int m,n;
    printf("Provide the grid of game\nEnter no of rows space no of columns\n");
    scanf("%d %d",&m,&n);

    char grid[m][n];
    char grid2[m][n];
    char *ptr_prev = grid;
    char *ptr_next = grid2;

    printf("If you want to give initial state of the game yourself enter 1\nIf you want to generate the initial state randomly enter 2\n");
    scanf("%d",&choice);

    if(choice==1)
    {
        dead_grid(ptr_prev,m,n);
    char temp;
    int temp2=1;
    for(int i=0;i<m;i++)
        {for(int r=0;r<n;r++)
            {
                printf("press 'a' if you want cell %d to be alive\npress 'd' if you want cell %d to be dead\n",temp2,temp2);
                temp2++;
                temp = getch();
                if(temp=='a')
                grid[i][r]='*';
                if(temp=='d')
                grid[i][r]=' ';
            }}
    }
    if(choice==2)                                                 ///randomly generating initial state
    {
           dead_grid(ptr_prev,m,n);

           for(int j=1;j<=(m*n)/2;j++)                             ///randomly making some cells alive
                grid[rand()%m][rand()%n] = '*';
    }
     char s='?';
    printf("Initial state is:\n");
    print_grid(ptr_prev, m,n);
    printf("\n");
    while(s!='q')
    {
    printf("if you want to see next generation press enter\nif you want to quit the game then press q\n");
    s = getch();
    system("cls");
    if(s!='q')
    {next_tick( ptr_prev,ptr_next, m, n);
    print_grid (ptr_next, m,n);
    for(int i=0;i<m;i++)
               {for(int r=0;r<n;r++)
                   {grid[i][r]=grid2[i][r];}}
    }}
}







