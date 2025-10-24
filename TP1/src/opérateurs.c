#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Affichage des valeurs de départ
    printf("Valeurs initiales : a = %d, b = %d\n\n", a, b);

    // Opérations arithmétiques
    printf("=== Opérateurs arithmétiques ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);      // Division entière
    printf("a %% b = %d\n\n", a % b);   // Modulo (%% pour afficher %)

    // Opérateurs logiques (comparaisons)
    printf("=== Opérateurs logiques / de comparaison ===\n");

    printf("a == b : %d\n", (a == b));  // Égalité
    printf("a != b : %d\n", (a != b));  // Différence
    printf("a > b  : %d\n", (a > b));   // Supérieur
    printf("a < b  : %d\n", (a < b));   // Inférieur
    printf("a >= b : %d\n", (a >= b));  // Supérieur ou égal
    printf("a <= b : %d\n\n", (a <= b));// Inférieur ou égal

    // Opérateurs logiques booléens (AND, OR, NOT)
    printf("=== Opérateurs logiques booléens ===\n");
    printf("(a > 10) && (b < 5) : %d\n", (a > 10) && (b < 5));  // ET logique
    printf("(a > 10) || (b > 5) : %d\n", (a > 10) || (b > 5));  // OU logique
    printf("!(a == b)           : %d\n", !(a == b));            // NON logique

    return 0;
}
