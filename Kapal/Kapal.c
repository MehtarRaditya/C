#include <stdio.h>

int main(void) {
    float waktu, kecepatan;
    float jarak, pertamaxTurbo;

    printf("Masukkan waktu lalu kecepatan: ");
    scanf("%f\n%f", &waktu, &kecepatan);

    printf("Waktu: %f jam\n", waktu);
    printf("Kecepatan: %f rata-rata\n", kecepatan);

    jarak = waktu*kecepatan;
    pertamaxTurbo = jarak/12;

    printf("Jarak: %.3f Km\n", jarak);
    printf("Pertamax Turbo yang dihabsikan: %.3f L\n", pertamaxTurbo);

    return 0;
}