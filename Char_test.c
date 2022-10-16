#include <stdio.h>

void main() {

    char nama[50];
    scanf("%[^\n]", &nama); getchar();

    char telepon[15];
    scanf("%s", &telepon); getchar();

    double IPK;
    scanf("%lf", &IPK); getchar();

    printf("Nama : %s\n", nama);
    printf("No. Telepon : %s\n", telepon);
    printf("IPK : %.2lf\n", IPK);

} 