#include <stdio.h>

void identitas(const char *nama, int umur) {
    printf("Namamu %s dan umurmu %d\n", nama, umur);
}

int main() {
    char nama[50];
    int umur;

    printf("Nama: ");
    scanf("%49s", nama);
    printf("Umur: ");
    scanf("%d", &umur);

    identitas(nama, umur);

    return 0;
}
