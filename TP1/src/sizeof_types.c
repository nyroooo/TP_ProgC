#include <stdio.h>

int main() {
    printf("Taille des différents types de base en octets :\n\n");

    // char
    printf("signed char      : %zu octets\n", sizeof(signed char));
    printf("unsigned char    : %zu octets\n", sizeof(unsigned char));

    // short
    printf("signed short     : %zu octets\n", sizeof(signed short));
    printf("unsigned short   : %zu octets\n", sizeof(unsigned short));

    // int
    printf("signed int       : %zu octets\n", sizeof(signed int));
    printf("unsigned int     : %zu octets\n", sizeof(unsigned int));

    // long int
    printf("signed long int  : %zu octets\n", sizeof(signed long int));
    printf("unsigned long int: %zu octets\n", sizeof(unsigned long int));

    // long long int
    printf("signed long long int  : %zu octets\n", sizeof(signed long long int));
    printf("unsigned long long int: %zu octets\n", sizeof(unsigned long long int));

    // float
    printf("float            : %zu octets\n", sizeof(float));

    // double
    printf("double           : %zu octets\n", sizeof(double));

    // long double
    printf("long double      : %zu octets\n", sizeof(long double));

    return 0;
}
