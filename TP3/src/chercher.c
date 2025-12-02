#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    srand(time(NULL));

    for(int i = 0; i < 100; i++){
        tab[i] = rand() % 200 - 100;
        printf("%d ", tab[i]);
    }
    printf("\n");

    int x;
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &x);

    int found = 0;
    for(int i = 0; i < 100; i++){
        if(tab[i] == x){
            found = 1;
            break;
        }
    }

    if(found) printf("entier présent\n");
    else      printf("entier absent\n");

    return 0;
}
