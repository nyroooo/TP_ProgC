#include <stdio.h>

int main() {
    unsigned int d = 0xF0001000;  

    int bit4 = (d >> 28) & 1;
    int bit20 = (d >> 12) & 1;

    if(bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
