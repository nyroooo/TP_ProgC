#include <stdio.h>

int main() {
    // Déclaration et affectation des variables

    // char
    signed char c1 = -100;
    unsigned char c2 = 200;

    // short
    signed short s1 = -32000;
    unsigned short s2 = 65000;

    // int
    signed int i1 = -123456;
    unsigned int i2 = 123456U;

    // long int
    signed long int l1 = -123456789L;
    unsigned long int l2 = 123456789UL;

    // long long int
    signed long long int ll1 = -1234567890123LL;
    unsigned long long int ll2 = 1234567890123ULL;

    // float
    float f = 3.14f;

    // double
    double d = 2.718281828;

    // long double
    long double ld = 1.6180339887L;

    // Affichage des valeurs
    printf("Valeurs des différents types de base :\n\n");

    printf("signed char        : %d\n", c1);
    printf("unsigned char      : %u\n", c2);

    printf("signed short       : %d\n", s1);
    printf("unsigned short     : %u\n", s2);

    printf("signed int         : %d\n", i1);
    printf("unsigned int       : %u\n", i2);

    printf("signed long int    : %ld\n", l1);
    printf("unsigned long int  : %lu\n", l2);

    printf("signed long long int   : %lld\n", ll1);
    printf("unsigned long long int : %llu\n", ll2);

    printf("float              : %.2f\n", f);
    printf("double             : %.9f\n", d);
    printf("long double        : %.10Lf\n", ld);

    return 0;
}
