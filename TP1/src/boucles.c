#include <stdio.h>

int main() {
    int compteur = 9; // Tu peux changer cette valeur (< 10)

    if (compteur >= 10) {
        printf("Erreur : la valeur du compteur doit être inférieure à 10.\n");
        return 1;
    }

    printf("Triangle rectangle avec des boucles for :\n\n");

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (i > 2 && j > 1 && j < i) {
                printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}

