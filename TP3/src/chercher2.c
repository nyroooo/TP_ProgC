#include <stdio.h>

int compare(char a[], char b[]) {
    int i = 0;
    while(a[i] != '\0' && b[i] != '\0'){
        if(a[i] != b[i]) return 0;
        i++;
    }
    return a[i] == '\0' && b[i] == '\0';
}

int main() {
    char phrases[10][200] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char cherche[200];
    printf("Entrez une phrase a chercher : ");
    fgets(cherche, 200, stdin);

    int found = 0;

    for(int i = 0; i < 200; i++){
        if(cherche[i] == '\n'){
            cherche[i] = '\0';
            break;
        }
    }

    for(int i = 0; i < 10; i++){
        if(compare(phrases[i], cherche)){
            found = 1;
            break;
        }
    }

    if(found) printf("Phrase trouvée\n");
    else      printf("Phrase non trouvée\n");

    return 0;
}
