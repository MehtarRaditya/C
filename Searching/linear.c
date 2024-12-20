#include <stdio.h>

int main(void){
  int number[20] = {1, 44, 13, 22, 51, 98, 33, 33, 99, 26, 37};
  int search = 33;

  for (int i = 0; i < 11; i++)
  {
    if (search == number[i])
    {
      printf("hasil ada di index: %d\n", i);
    }
  }
}