#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LONGUEUR 50

int main(void)
{
    int valeurs[NB_VALEURS] = { 8, 4, 12 };

    // 1. recherche du maximum
    int maximum = valeurs[0];
    for (int i = 1; i < NB_VALEURS; i++)
    {
        if (valeurs[i] > maximum)
        {
            maximum = valeurs[i];
        }
    }

    // 2. calcul de l'échelle (float, sinon la division donne un entier)
    float echelle = (float) MAX_LONGUEUR / maximum;

    // 3. affichage
    for (int i = 0; i < NB_VALEURS; i++)
    {
        printf("| ");
        for (int j = 0; j < valeurs[i] * echelle; j++)
        {
            printf("x");
        }
        printf(" %d\n", valeurs[i]);
    }

    printf("+-------------------------------------------------------\n");

    return 0;
}