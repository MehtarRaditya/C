#include <stdio.h>

float utsFunc(float nilaiUTS);
float uasFunc(float nilaiUAS);
float tugasFunc(float nilaiTugas);
float totalFunc(float UTS, float UAS, float Tugas);
char predikatFunc(float total);

int main(void){
  float nilaiUTS, nilaiUAS, nilaiTugas;

  do
  {
    printf("Masukkan nilai diantara 0-100\n");

    printf("Masukkan Nilai Awal UTS: ");
    scanf("%f", &nilaiUTS);

    printf("Masukkan Nilai Awal UAS: ");
    scanf("%f", &nilaiUAS);

    printf("Masukkan Nilai Awal Tugas: ");
    scanf("%f", &nilaiTugas);
  } while ((nilaiUTS >= 100 || nilaiUTS <= 0) 
    || (nilaiUAS >= 100 || nilaiUAS <= 0)
    || (nilaiTugas >= 100 || nilaiTugas <= 0)
    );

  float UTS = utsFunc(nilaiUTS);
  printf("Nilai UTS Setelah Pembobotan: %.2f\n", UTS);

  float UAS = uasFunc(nilaiUAS);
  printf("Nilai UAS Setelah Pembobotan: %.2f\n", UAS);

  float tugas = tugasFunc(nilaiTugas);
  printf("Nilai Tugas Setelah Pembobotan: %.2f\n", tugas);

  float total = totalFunc(UTS, UAS, tugas);
  char predikat = predikatFunc(total);
  printf("Total = %.2f dengan predikat %c\n", total, predikat);

  return 0;
}

float utsFunc(float nilaiUTS){
  const int bobotUTS = 30;
  float UTS = (nilaiUTS*bobotUTS)/100;

  return UTS;
}

float uasFunc(float nilaiUAS){
  const int bobotUAS = 50;
  float UAS = (nilaiUAS*bobotUAS)/100;

  return UAS;
}

float tugasFunc(float nilaiTugas){
  const int bobotTugas = 20;
  float tugas = (nilaiTugas*bobotTugas)/100;

  return tugas;
}

float totalFunc(float UTS, float UAS, float tugas){
  float total = UTS + UAS + tugas;

  return total;
}

char predikatFunc(float total){
  char predikat;

  if (total < 60)
  {
    predikat = 'D';
  }
  else if ((total >= 60) && (total < 75))
  {
    predikat = 'C';
  }
  else if ((total >= 75) && (total < 90))
  {
    predikat = 'B';
  }
  else if (total >= 90)
  {
    predikat = 'A';
  }
  
  return predikat;
}