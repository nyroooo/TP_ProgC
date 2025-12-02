#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];

    for(int i = 0; i < 100; i++)
        tab[i] = i * 2;

    printf("Tableau trié :\n");
    for(int i = 0; i < 100; i++)
        printf("%d ", tab[i]);
    printf("\n");

    int x;
    printf("Entrez l'entier à chercher : ");
    scanf("%d", &x);

    int debut = 0, fin = 99, trouve = 0;

    while(debut <= fin){
        int mid = (debut + fin) / 2;
        if(tab[mid] == x){
            trouve = 1;
            break;
        } else if(tab[mid] < x){
            debut = mid + 1;
        } else {
            fin = mid - 1;
        }
    }

    if(trouve) printf("entier présent\n");
    else       printf("entier absent\n");

    return 0;
}
