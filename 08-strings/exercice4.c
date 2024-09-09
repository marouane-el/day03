#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char p1 [20];
    char p2 [20];
   printf("entrer le mot 1: ");
   gets(p1);
   printf("entrer le mot 2: ");
   gets(p2);
   if(strcmp(p1,p2)==0)
   printf("valeur 1 egale la valeur 2",p1);
   else
   printf("les valeur n est pas egale");



    return 0;
}