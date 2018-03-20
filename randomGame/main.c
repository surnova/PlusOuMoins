#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAX = 100, MIN = 1;
    int nombreChoisi = 0, continueGame = 1, nombreRandom = 0, nombreEssais = 0;

    srand(time(NULL));
    nombreRandom = (rand() % (MAX - MIN + 1)) + MIN;

    do
    {

            printf("le nombre mystere a ete choisi. cest:  %d\n", nombreRandom);
            printf("Veuillez choisir votre nombre :\n");

            scanf("%d", &nombreChoisi);
            nombreEssais++;

            if (nombreChoisi > nombreRandom )
            {
                    printf ("trop haut !\n Essayez encore !\n");
            }
                else if (nombreChoisi < nombreRandom)
            {
                    printf("Trop bas !\n Essayez encore !\n");
            }
                else if (nombreChoisi == nombreRandom)
            {
                    printf("Felicitations ! Vous avez trouve le nombre !\n Vous avez fait %d essais ! \n Voulez-vous continuer ?\n", nombreEssais);
                    scanf("%d", &continueGame);
                    if (continueGame == 1) {
                        nombreRandom = (rand() % (MAX - MIN + 1)) + MIN;
                        nombreEssais = 0;
                    }
            }

    } while (continueGame == 1);

    return 0;
}
