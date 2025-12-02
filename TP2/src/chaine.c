#include <stdio.h>

int main() {
    char s1[100] = "Hello";
    char s2[100] = " World!";
    char copy[100];
    char concat[200];

    int i = 0;
    while(s1[i] != '\0') i++;
    printf("Longueur de s1 = %d\n", i);

    int j = 0;
    for(j = 0; s1[j] != '\0'; j++)
        copy[j] = s1[j];
    copy[j] = '\0';
    printf("Copie = %s\n", copy);

    int k = 0;
    for(k = 0; s1[k] != '\0'; k++)
        concat[k] = s1[k];

    int m = 0;
    while(s2[m] != '\0'){
        concat[k++] = s2[m++];
    }
    concat[k] = '\0';

    printf("Concaténation = %s\n", concat);

    return 0;
}
