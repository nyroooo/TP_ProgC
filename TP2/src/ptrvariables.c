#include <stdio.h>

int main() {
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long l = 0x11223344;
    long long ll = 0x1122334455667788;
    float f = 2.0f;
    double d = 3.0;
    long double ld = 4.0;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pl = &l;
    long long *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Adresse i : %p, Valeur : %x\n", pi, i);
    printf("Adresse f : %p, Valeur : %x\n", pf, *(int*)pf);

    *pi -= 1;
    *(int*)pf = 0x3f800000;

    printf("Après manipulation:\n");
    printf("Adresse i : %p, Valeur : %x\n", pi, i);
    printf("Adresse f : %p, Valeur : %x\n", pf, *(int*)pf);

    return 0;
}
