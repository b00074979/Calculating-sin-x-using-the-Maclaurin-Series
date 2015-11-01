#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m=0,fact=1,tot=0,B,total=0,sub=0;
   int x,i,count,A,y,c;

    printf("\n\t*** Solve f(x)= sin(x) using the Maclaurins series ***\t\n\n\n\n");
    printf("\tPlease enter a value for x:\n\n\t");
    scanf("%d",&x);

    printf("\n\n\t\t-------------------------------------\t\t");
    printf("\n\tCalculation to be carried out is:\n\n\tf(%d) = sin(%d)\n\t",x,x);

    printf("\n\n\t\t*********\t\t\n\n");
    printf("\n\tStarting from f(%d)=x(%d)\n",m,m);
    printf("\tTherefore a%d=0\n",m);

    for(i=0; i<x; i++){
      printf("\n\n\t\t-----------\t\t\n\n");
      printf("\n\t At f(%d)=x(%d)\n",m=m+1,m);

    if(m % 4 ==0)
         printf("\tTherefore sin(0)=0.",m);
       else
         printf("\tTherefore cos(0)=1.",m);

    for (count= 1; count<m; count++);
       fact = fact * count;

     printf("\n\tFactorial of %d (n!)= %d\n", m, fact);

       y = 1.0;
       c = 1;

    while ( c <= m)

       {
            y = y*x;
            c++;

       }


       printf("\n\tx = %d\n\tm = %d\n\tx to power m = %d\n",x,m,y);

       if (m % 2==0)
         B=0;

     else
        A=y/fact;



    if (m % 2==0)
       printf("\n\n\tTherefore a = %d\n",B);
     else
       printf("\n\n\tTherefore a = %d\n",A);



    if (m % 2==0)
         sub = tot +B;
     else

       tot = tot + A;



    if (m % 2==0)
       printf("\tCurrent total:%d\n",sub);
     else
      printf("\tCurrent total:%d\n",tot);
}



        printf("\n\n\t\t----------\t\t\n\n");

        printf("\n\n\tf(x) = sin(x) for x = %d is  equal to %d\n\n",x,tot);




    return 0;
}
