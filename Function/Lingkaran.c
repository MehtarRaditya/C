#include <stdio.h>

float luasLingkaran(float jari){
  const float phi = 3.14;

  float luas = jari*jari*phi;

  return luas;
}

int main(void){
  float jari;

  printf("jari: ");
  scanf("%f", &jari);

  float luas = luasLingkaran(jari);
  printf ("%f\n", luas);
}