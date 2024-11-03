#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int age =10;
    int agelimit =20;
    int userage;
    printf ("enter your age");
    scanf ("%d", &userage);
    if ( userage > agelimit)
    {printf ("you are not qualified");} 
    else {printf ("you are qualified");}
   

}