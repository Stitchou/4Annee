#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    /*char s[512];
    for(i = 0; i < 512; i++ )
        s[i] = 1;

// test getchar lire 2 caractères
    ch = getchar();
    printf("%d \n",ch);
    ch = getchar();
    printf("%d \n",ch);*/



    char * p = (char *) malloc (sizeof(char));

// méthode 1 gets
    gets(p);
    i = 0;
    printf("Tapez une chaine\n");
    while((*p) != '\0')
    {
        p++;
        i++;
    }

    printf ("%d caractere",i);
    if(i > 1)
        printf("s");
    printf("\n\n");

// méthode 2 getc
    i = 0;
    printf("Tapez une chaine\n");
    while (getc(stdin) != '\n')
        i++;

    printf ("%d caractere",i);
    if(i > 1)
        printf("s");
    printf("\n\nAppuyez pour quitter");

    return 0;
    getchar();
}

