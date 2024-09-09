#include <stdio.h>
#include <stdlib.h>
//Affichage d'une Chaîne
int main() {
    char t [20] ;

   printf("entre la phrase: ");
   scanf(" %[^\n]s",t);
printf("votre phrase : %s \n",t);

    return 0;
}