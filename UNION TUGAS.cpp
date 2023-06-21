#include <stdio.h>
// Muhammad Rayyan Ghifari
//22040700112

int main() {
    union {
        float luas, keliling;
    } persegi1, persegi2;

    float sisi1, sisi2;

    printf("Panjang sisi persegi 1: ");
    scanf("%f", &sisi1);
    persegi1.luas = sisi1 * sisi1;
    printf("Luas persegi 1: %0.f\n", persegi1.luas);
    persegi1.keliling = 4 * sisi1;
    printf("Keliling persegi 1: %0.f\n", persegi1.keliling);

    printf("\n");

    printf("Panjang sisi persegi 2: ");
    scanf("%f", &sisi2);
    persegi2.luas = sisi2 * sisi2;
    printf("Luas persegi 2: %0.f\n", persegi2.luas);
    persegi2.keliling = 4 * sisi2;
    printf("Keliling persegi 2: %0.f\n", persegi2.keliling);

    return 0;
}
