void dead_grid(char *, int,int );
void dead_grid(char *ptr_prev, int m,int n)    ///makes all the cells dead initially
{
                  for(int i=0;i<m;i++)
                    {
                       for(int r=0;r<n;r++)
                         {
                             *(ptr_prev+i*n+r) = ' ';
                         }
                     }
}