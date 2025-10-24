#include <stdio.h>

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    printf("Affichage des nombres en binaire :\n\n");

    for (int n = 0; n < taille; n++) {
        unsigned int nombre = nombres[n];

        printf("Décimal : %u\nBinaire : ", nombre);

        
        int a_commence = 0;
        for (int i = 31; i >= 0; i--) {
            unsigned int bit = (nombre >> i) & 1; 
            if (bit == 1)
                a_commence = 1; 

            if (a_commence)
                printf("%u", bit);
        }

        
        if (!a_commence)
            printf("0");

        printf("\n\n");
    }

    return 0;
}
