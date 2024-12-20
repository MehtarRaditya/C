#include <stdio.h>

int main(void){
  int number[10];

  number[0] = 1;
  number[1] = 20;
  number[2] = 33;
  number[3] = 45;
  number[4] = 56;
  number[5] = 61;

  for (int i = 0; i < 6; i+=2)
  {
    printf("%d \n", number[i]);
  }
}