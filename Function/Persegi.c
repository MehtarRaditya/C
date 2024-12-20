#include <stdio.h>

int volumeBalok(int a, int b, int c){
  int volume;

  printf ("%d \n", a);

  volume = a*b*c;

  return volume;
}

int main(void){
  int panjang = 6;
  int lebar = 10;
  int tinggi = 15;

  int volume = volumeBalok(panjang, lebar, tinggi);

  printf("%d", volume);
}