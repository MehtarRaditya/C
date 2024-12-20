#include <stdio.h>

int main(void){
  int z[] = {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 4, 5, 3};
  int search = 3;

  for (int i = 0; i < sizeof(z)/sizeof(z[0]); i++)
  {
    if (search == z[i])
    {
      printf("hasil ada di index: %d\n", i);
    }
    else if ((i == (sizeof(z)/sizeof(z[0]) - 1)) && (search != z[(sizeof(z)/sizeof(z[0]))]-1))
    {
      printf("tidak ada hasil\n");
    }
    
  }
}