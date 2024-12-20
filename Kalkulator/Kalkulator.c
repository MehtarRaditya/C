#include <stdio.h>

float opFunc(float angka1, float angka2);
float angka1Func(void);
float angka2Func(void);

int main(void){
  int angka1 = angka1Func();
  int angka2 = angka2Func();

  float hasil = opFunc(angka1, angka2);
  printf("Hasil = %.2f", hasil);

  return 0;
}

float angka1Func(void){
  float angka1;

  printf("Masukkan angka pertama: \n");
  scanf("%f", &angka1);

  return angka1;
}

float angka2Func(void){
  float angka2;

  printf("Masukkan angka pertama: \n");
  scanf("%f", &angka2);

  return angka2;
}

float opFunc(float angka1, float angka2){
  float hasil;
  char operator;

  printf("Masukkan operator: ");
  scanf(" %c", &operator);

  if (operator == '+')
  {
    hasil = angka1+angka2;
  }
  else if (operator == '-')
  {
    /* code */
  }
  else if (operator == '/')
  {
    /* code */
  }
  else if (operator == '*')
  {
    /* code */
  }

  return hasil;
}