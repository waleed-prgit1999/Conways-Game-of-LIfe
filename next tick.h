void next_tick(char *, char *,int ,int);



void next_tick(char *ptr_prev, char *ptr_next,int m,int n)
{
    int nieghbours=0;
    dead_grid(ptr_next,m,n);
    if(*ptr_prev=='*' |*ptr_prev==' ')                  ///top left most corner case
    {if(*(ptr_prev+1)=='*')
        nieghbours++;
        if(*(ptr_prev+n)=='*')                         ///checking the no of nieghbours
        nieghbours++;
        if(*(ptr_prev+n+1)=='*')
        nieghbours++;}
        if(*ptr_prev =='*')
        {if(nieghbours<2|nieghbours>3)           ///applying the rules if the cell is live
            *ptr_next = ' ';
            if(nieghbours==2|nieghbours==3)
                *(ptr_next) = '*';}
        if(*ptr_prev == ' ')
        {if(nieghbours==3)                     ///applying the rules if the cell is dead
                *(ptr_next) = '*';}
nieghbours = 0;
 ///************************************************************************************************************************///
   if(*(ptr_prev+n*(m-1))=='*' |*(ptr_prev+n*(m-1))==' ')             ///left bottom most corner case *(ptr_prev+n*(m-1))
   {if(*(ptr_prev+1+n*(m-1))=='*')
        nieghbours++;
        if(*(ptr_prev+n*(m-1)-n)=='*')        ///checking no of nieghbours
        nieghbours++;
        if(*(ptr_prev+n*(m-1)-n+1)=='*')
        nieghbours++;}
    if(*(ptr_prev+n*(m-1)) =='*')
        {if(nieghbours<2|nieghbours>3)
               *(ptr_next+n*(m-1)) = ' ';      /// applying the rules if cell is alive
            if(nieghbours==2|nieghbours==3)
                *(ptr_next+n*(m-1)) = '*';}
        if(*(ptr_prev+n*(m-1)) == ' ')
        {if(nieghbours==3)                 ///applying the rules if the cell is dead
                *(ptr_next+n*(m-1)) = '*';}
        nieghbours = 0;
   ///*********************************************************************************************************************///
         if(*(ptr_prev+n*m-1)=='*' |*(ptr_prev+n*m-1)==' ')            ///right bottom most corner case (ptr_prev+n*m-1)
   {if(*(ptr_prev+1+n*m-1-1)=='*')
        nieghbours++;
        if(*(ptr_prev+n*m-1-n)=='*')        ///checking no of nieghbours
        nieghbours++;
        if(*(ptr_prev+n*m-1-n-1)=='*')
        nieghbours++;}
    if(*(ptr_prev+n*m-1) =='*')
        {if(nieghbours<2|nieghbours>3)
               *(ptr_next+n*m-1) = ' ';      /// applying the rules if cell is alive
            if(nieghbours==2|nieghbours==3)
                *(ptr_next+n*m-1) = '*';}
        if(*(ptr_prev+n*m-1) == ' ')
        {if(nieghbours==3)                 ///applying the rules if the cell is dead
                *(ptr_next+n*m-1) = '*';}
        nieghbours = 0;
///**************************************************************************************************************************///
        if(*(ptr_prev+n-1)=='*' |*(ptr_prev+n-1)==' ')                  ///top right most corner case   *(ptr_prev+n-1)
    {
        if(*(ptr_prev+n-1-1)=='*')
        nieghbours++;
        if(*(ptr_prev+n-1+n)=='*')                         ///checking the no of nieghbours
        nieghbours++;
        if(*(ptr_prev+n-1+n-1)=='*')
        nieghbours++;}
        if(*(ptr_prev+n-1) =='*')
        {if(nieghbours<2|nieghbours>3)           ///applying the rules if the cell is live
            *(ptr_next+n-1) = ' ';
            if(nieghbours==2|nieghbours==3)
                *(ptr_next+n-1) = '*';}
        if(*(ptr_prev+n-1) == ' ')
        {if(nieghbours==3)                     ///applying the rules if the cell is dead
                *(ptr_next+n-1) = '*';}
        nieghbours = 0;
///**************************************************************************************************************************///
        for(int i =1;i<n-1;i++)                             ///top boundary cases
           {if(*(ptr_prev+i)=='*' | *(ptr_prev+i)==' ')
              {if(*(ptr_prev+i+1)=='*')
                    nieghbours++;
                   if(*(ptr_prev+i-1)=='*')
                    nieghbours++;
                    if(*(ptr_prev+i+n)=='*')
                    nieghbours++;
                    if(*(ptr_prev+i+n+1)=='*')
                    nieghbours++;
                    if(*(ptr_prev+i+n-1)=='*')
                    nieghbours++;}

           if(*(ptr_prev+i)=='*')                           /// applying the rules if the cell is live
           {if(nieghbours<2|nieghbours>3)
               *(ptr_next+i) = ' ';
               if(nieghbours==2|nieghbours==3)
                *(ptr_next+i) = '*';}
            if(*(ptr_prev+i)==' ')                       /// applying the rules if the cell is dead
            {if(nieghbours==3)
                *(ptr_next+i) = '*';
            }nieghbours = 0;}
///************************************************************************************************************************///
        for(int i =1;i<n-1;i++)                             ///left boundary cases
           {if(*(ptr_prev+i*n)=='*' | *(ptr_prev+i*n)==' ')
              {if(*(ptr_prev+i*n+n)=='*')
                    nieghbours++;
                   if(*(ptr_prev+i*n-n)=='*')
                    nieghbours++;
                    if(*(ptr_prev+i*n+1)=='*')
                    nieghbours++;
                    if(*(ptr_prev+i*n+1+n)=='*')
                    nieghbours++;
                    if(*(ptr_prev+i*n+1-n)=='*')
                    nieghbours++;}
              if(*(ptr_prev+i*n)=='*')                           /// applying the rules if the cell is live
           {if(nieghbours<2|nieghbours>3)
               *(ptr_next+i*n) = ' ';
               if(nieghbours==2|nieghbours==3)
                *(ptr_next+i*n) = '*';}
            if(*(ptr_prev+n*(m-1)+i)==' ')                       /// applying the rules if the cell is dead
            {if(nieghbours==3)
                *(ptr_next+i*n) = '*';}nieghbours = 0;}

///**************************************************************************************************************************///
           for(int i =1;i<n-1;i++)                             ///right boundary cases
           {if(*(ptr_prev+n-1+i*n)=='*' | *(ptr_prev+n-1+i*n)==' ')
              {if(*(ptr_prev+n-1+i*n+n)=='*')
                    nieghbours++;
                   if(*(ptr_prev+n-1+i*n-n)=='*')
                    nieghbours++;
                    if(*(ptr_prev+n-1+i*n-1)=='*')
                    nieghbours++;
                    if(*(ptr_prev+n-1+i*n-1+n)=='*')
                    nieghbours++;
                    if(*(ptr_prev+n-1+i*n-1-n)=='*')
                    nieghbours++;}
              if(*(ptr_prev+n-1+i*n)=='*')                           /// applying the rules if the cell is live
           {if(nieghbours<2|nieghbours>3)
               *(ptr_next+n-1+i*n) = ' ';
               if(nieghbours==2|nieghbours==3)
                *(ptr_next+n-1+i*n) = '*';
           }if(*(ptr_prev+n-1+i*n)==' ')                       /// applying the rules if the cell is dead
            {if(nieghbours==3)
                *(ptr_next+n-1+i*n) = '*';}nieghbours = 0;}
///**************************************************************************************************************************///
     for(int i =1;i<n-1;i++)                             ///bottom boundary cases
           {if(*(ptr_prev+n*(m-1)+i)=='*' | *(ptr_prev+n*(m-1)+i)==' ')
              {if(*(ptr_prev+n*(m-1)+i+1)=='*')
                    nieghbours++;
                   if(*(ptr_prev+n*(m-1)+i-1)=='*')
                    nieghbours++;
                    if(*(ptr_prev+n*(m-1)+i-n)=='*')
                    nieghbours++;
                    if(*(ptr_prev+n*(m-1)+i-n+1)=='*')
                    nieghbours++;
                    if(*(ptr_prev+n*(m-1)+i-n-1)=='*')
                    nieghbours++;}
           if(*(ptr_prev+n*(m-1)+i)=='*')                           /// applying the rules if the cell is live
           {if(nieghbours<2|nieghbours>3)
               *(ptr_next+n*(m-1)+i) = ' ';
               if(nieghbours==2|nieghbours==3)
                *(ptr_next+n*(m-1)+i) = '*';}
            if(*(ptr_prev+n*(m-1)+i)==' ')                       /// applying the rules if the cell is dead
            {if(nieghbours==3)
                *(ptr_next+n*(m-1)+i) = '*';
            }nieghbours = 0;}
///************************************************************************************************************************///
    for(int i=1;i<m-1;i++)                  ///  Middle cases
    {for(int r = 1;r<n-1;r++)
        {if(*(ptr_prev+r+i*n)=='*' | *(ptr_prev+r+i*n)==' ')   ///calculating no of live nieghbours
                {
                   if(*(ptr_prev+r+1+i*n)=='*')
                    nieghbours++;
                   if(*(ptr_prev+r-1+i*n)=='*')
                    nieghbours++;
                    if(*(ptr_prev+r+n+i*n)=='*')
                    nieghbours++;
                    if(*(ptr_prev+r-n+i*n)=='*')
                    nieghbours++;
                    if(*(ptr_prev+r+n+1+i*n)=='*')
                    nieghbours++;
                    if(*(ptr_prev+r+n-1+i*n)=='*')
                    nieghbours++;
                    if(*(ptr_prev+r-n+1+i*n)=='*')
                    nieghbours++;
                    if(*(ptr_prev+r-n-1+i*n)=='*')
                   nieghbours++;
                }
            if(*(ptr_prev+r+i*n)=='*')                           /// applying the rules if the cell is live
           {
               if(nieghbours<2|nieghbours>3)
               *(ptr_next+r+i*n) = ' ';
               if(nieghbours==2|nieghbours==3)
                *(ptr_next+r+i*n) = '*';
           }
            if(*(ptr_prev+r+i*n)==' ')                       /// applying the rules if the cell is dead
            {if(nieghbours==3)
                *(ptr_next+r+i*n) = '*';
            }nieghbours = 0;}}
}


