#include <stdio.h>

void afficher_octets(void *p, int taille) {
    unsigned char *c = (unsigned char*)p;
    for(int i = 0; i < taille; i++)
        printf("%02x ", c[i]);
    printf("\n");
}

int main() {
    short s = 0x1234;
    int i = 0x12345678;
    long l = 0x1122334455667788;
    float f = 3.14f;
    double d = 3.14;
    long double ld = 3.14;

    printf("Octets de short :\n");
    afficher_octets(&s, sizeof(short));

    printf("Octets de int :\n");
    afficher_octets(&i, sizeof(int));

    printf("Octets de long int :\n");
    afficher_octets(&l, sizeof(long));

    printf("Octets de float :\n");
    afficher_octets(&f, sizeof(float));

    printf("Octets de double :\n");
    afficher_octets(&d, sizeof(double));

    printf("Octets de long double :\n");
    afficher_octets(&ld, sizeof(long double));

    return 0;
}
