#include <stdio.h>
#include <stdlib.h>

int compte1(FILE * fic);
int compte2(FILE * fic);
int main()
{
    FILE * fichier = NULL;
    fichier = fopen("map.txt","r");
    int nombre = 0;

    if (fichier != NULL)
    {
        nombre = compte1(fichier);
        printf("Nombre de caractere : %d\n",nombre);
        nombre = compte1(fichier);
        fseek(fichier, 0, SEEK_SET);
        printf("Nombre de ligne: %d\n",nombre);
        fclose(fichier);
    }
    else
        printf("Impossible d'ouvrir le fichier");

    putc(97,stdout);
    putchar('e');
    //getc();
    getchar();
    return 0;
}

int compte1(FILE * fic)
{
    printf("entre ds le fichier \n");
    int res = 1;
    int caractere;
    caractere = fgetc(fic);
    while (caractere != EOF)
    {
        printf(".");
        caractere = fgetc(fic);
        res++;
    }
    printf("\nsortie\n");
    return res;
}

int compte2(FILE * fic){

     printf("entre ds le fichier \n");
    int res = 1;
    char ligne[1024];
    while (fgets(ligne,1024,fic) != NULL)
    {
        printf(".");
        res++;
    }
    printf("\nsortie\n");
    return res;
}
