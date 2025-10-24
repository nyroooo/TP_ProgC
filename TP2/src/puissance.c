#include <stdio.h>

int main() {
    int a = 2;   // base
    int b = 3;   // exposant
    int resultat = 1; 

    printf("Calcul de la puissance : %d^%d\n", a, b);

  
    if (b == 0) {
        resultat = 1;
    } 
    
    else if (b > 0) {
        for (int i = 1; i <= b; i++) {
            resultat *= a;  
        }
    } 
   
    else {
        double resultat_double = 1.0;
        for (int i = 1; i <= -b; i++) {
            resultat_double *= a;
        }
        printf("Résultat : 1/%.0f = %.6f\n", resultat_double, 1.0 / resultat_double);
        return 0;
    }

    printf("Résultat : %d^%d = %d\n", a, b, resultat);

    return 0;
}
