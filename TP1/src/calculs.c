#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 5;
    char op = '*';  

    int resultat; 

    printf("num1 = %d, num2 = %d, operateur = '%c'\n", num1, num2, op);

    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("Résultat : %d + %d = %d\n", num1, num2, resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("Résultat : %d - %d = %d\n", num1, num2, resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("Résultat : %d * %d = %d\n", num1, num2, resultat);
            break;

        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("Résultat : %d / %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : division par zéro impossible.\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("Résultat : %d %% %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : modulo par zéro impossible.\n");
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("Résultat : %d & %d = %d\n", num1, num2, resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("Résultat : %d | %d = %d\n", num1, num2, resultat);
            break;

        case '~':
           
            resultat = ~num1;
            printf("Résultat : ~%d = %d\n", num1, resultat);
            break;

        default:
            printf("Erreur : opérateur '%c' non reconnu.\n", op);
            break;
    }

    return 0;
}


