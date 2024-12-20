#include <stdio.h>

float luasLingkaran(float jari){
  const float phi = 3.14;

  float luas = jari*jari*phi;

  return luas;
}

int main(void){
  float luas;

  luas = luasLingkaran(5);
  printf ("%f\n", luas);

  luas = luasLingkaran(7);
  printf ("%f\n", luas);

  luas = luasLingkaran(10);
  printf ("%f\n", luas);
}