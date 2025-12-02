#include <stdio.h>

int main() {
    int n;
    long long u0 = 0, u1 = 1, un; 

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("La valeur de n doit être positive.\n");
        return 1;
    }

    printf("Suite de Fibonacci jusqu'à U%d :\n", n);

    if (n >= 0) {
        printf("%lld", u0);
    }
    if (n >= 1) {
        printf(", %lld", u1);
    }

    for (int i = 2; i <= n; i++) {
        un = u0 + u1;
        printf(", %lld", un);
        u0 = u1;
        u1 = un;
    }

    printf("\n");
    return 0;
}
