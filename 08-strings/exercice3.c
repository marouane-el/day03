#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Concaténation de Chaînes
int main()
{
    char f1 [10];
    char f2 [10];
    printf("entrer la 1 er phrase ");
    scanf(" %[^\n]s",&f1);
    printf("entrer la 2 er phrase ");
    scanf(" %[^\n]s",&f2);
    strcat(f1,f2);
    printf("Concaténation %s ",f1);




    return 0;
}
