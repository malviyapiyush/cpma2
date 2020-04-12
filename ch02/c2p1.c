/* c2p1.c

   Ray Santos
   August 16, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 2. Programming Project 1

   Write a program that uses printf to display the
   following picture on the screen:

          *
         *
        *
   *   *
    * *
     *

*/

#include<stdio.h>
int main(void)
{
    int i,j,rowsize=15,cut=3;
    for(i=0;i<=rowsize-1;i++)
    {
        for(j=0;j<=((rowsize-1)*2);j++)
        {
            if(j<cut)
            {
                printf(" ");
            }
            else
            {
                if(j==i || j+i==((rowsize-1)*2))
                printf("*");
                else
                printf(" ");
            }
        }
        printf("\n");
    }
}