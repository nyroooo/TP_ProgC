#include <stdio.h>

int main() {
    char noms[5][50] = {"Dupont", "Martin", "Durand", "Petit", "Legrand"};
    char prenoms[5][50] = {"Marie", "Pierre", "Luc", "Sarah", "Paul"};
    char adresses[5][100] = {
        "Adresse 1", "Adresse 2", "Adresse 3", "Adresse 4", "Adresse 5"
    };
    float noteC[5] = {16.5, 14.0, 12.5, 15.0, 10.5};
    float noteSys[5] = {12.1, 14.1, 10.3, 13.2, 11.7};

    for(int i = 0; i < 5; i++){
        printf("\nÉtudiant %d\n", i+1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note C : %.2f\n", noteC[i]);
        printf("Note Système : %.2f\n", noteSys[i]);
    }

    return 0;
}
