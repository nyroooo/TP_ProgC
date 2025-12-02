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

    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 99 - i; j++){
            if(tab[j] > tab[j+1]){
                int tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }

    printf("Tableau trié :\n");
    for(int i = 0; i < 100; i++)
        printf("%d ", tab[i]);
    printf("\n");

    return 0;
}
