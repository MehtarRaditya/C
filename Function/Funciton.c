#include <stdio.h>

void Hello(void){
  printf("Tes \n");
  printf("abc\n");
  printf("lorem\n");
}

int main(void){
  for (int i = 0; i < 6; i++)
  {
    Hello();
  }
}