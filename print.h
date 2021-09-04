void print_grid(char *, int, int);
void print_grid(char *ptr_prev, int m ,int n)
{
               for(int i=0;i<m;i++)
               {for(int r=0;r<n;r++)
                 {printf("%c ",*(ptr_prev+i*n+r));}
                 printf("\n");}
}