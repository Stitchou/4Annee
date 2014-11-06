#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void lire(FILE * fic, FILE * cop);
void copier(FILE * fic, char chaine);
void methode2();
int main()
{
    /*FILE * fichier = NULL;
    FILE * fichier2 = NULL;
    fichier = fopen("map.txt","r");


    if (fichier != NULL)
    {
        fichier2 = fopen("map_copi.txt","w+");
        lire(fichier,fichier2);
        fclose(fichier);
        fclose(fichier2);
    }
    else
        printf("Impossible d'ouvrir le fichier source");
    */
    mRead();

    getchar();
    return 0;
}

void lire(FILE * fic,FILE * cop)
{
    printf("entre ds le fichier source \n\n");
    char ligne ;
    do
    {
        ligne = fgetc(fic);
        copier(cop,ligne);
    }while (ligne != EOF);
    printf("\ncopie terminee\nsortie fichier source\n");

}

void copier(FILE * fic,char chaine){

     printf("%c",chaine);
     fputc(chaine,fic);
}

void methode2()
{
    FILE *fp;
    FILE *fp2;
    char buffer[1];

    fp = fopen("map.txt", "r");
    fp2 = fopen("mapcopi2.txt", "w+");

    do
    {
        fread(buffer, 1, 1, fp);
        fwrite(buffer, 1, 1, fp2);
        printf("%c",buffer[0]);

    }while( !feof(fp));

    printf("Copie terminee");
    fclose(fp);
    fclose(fp2);
}

void mRead(){
    int i_in, i_out;

    i_in = fopen("map.txt","r");
    i_out = fopen("map3.txt","w+");

    if (i_in == -1 || i_out == -1 )
    {
        perror("Erreur");
        return;
    }

    int buffer;
    int retour =1;
    do
    {
        retour = read(i_in,&buffer,1);
        write(i_out,&buffer,1);
        printf("%c",buffer);

    }while( retour > 0);
    fclose(i_in);
    fclose(i_out);
}
