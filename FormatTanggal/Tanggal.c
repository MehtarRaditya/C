#include <stdio.h>

int main(void) {
    int input;
    int tahun, bulan, hari;
    printf("Masukkan Hari: ");
    scanf("%d", &input);

    tahun = input/365;
    printf("Tahun: %d\n", tahun);

    bulan = (input-(365*tahun))/30;
    printf("Bulan: %d\n", bulan);

    hari = input-((tahun*365)+(bulan*30));
    printf("Hari: %d\n", hari);
    return 0;
}