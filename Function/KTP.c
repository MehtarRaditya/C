#include <stdio.h>

void identintas(const char *nama, short umur){
  printf("Namamu %s ", nama);
  printf("dan umurmu %d\n", umur);
}

int main(void){
  char nama[50];
  short umur;

  printf("Masukkan nama: ");
  scanf("%49s", nama);
  printf("Masukkan umur: ");
  scanf("%d", &umur);

  identintas(nama, umur);

  return 0;
}