#include <stdio.h>

float berasFunc (float anak){
  const int gram = 500;
  float beras;
  
  beras = (gram*anak)/1000;

  return beras;
}

int anakFunc(int jumlah){
  int ganjil;

  if (jumlah%2 == 0)
  {
    ganjil = 0;
  }
  else if (jumlah%2 != 0)
  {
    ganjil = 1;
  }

  return ganjil;
}

int biayaFunc (float beras, int ganjil){
  int biaya, total;
  const int hargaAwal = 10000;

  biaya = (beras*hargaAwal);

  if (ganjil == 0)
  {
    total = biaya*1;
  }
  else if (ganjil == 1)
  {
    total = biaya*10;
  }
  
  return total;
}

int main(void){
  int jumlah, gram;

  printf("Masukkan jumlah anak: ");
  scanf("%d", &jumlah);

  int anak = anakFunc(jumlah);
  float beras = berasFunc(jumlah);
  int biaya = biayaFunc(beras, anak);

  printf("Beras yang dibutuhkan: %.2f kg\n", beras);
  printf("Biaya: %d", biaya);

  return 0;
}