#include <stdio.h>

float deret(int n){
  float x;

  for (int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      x = 4/1;
    }
    else
    {
      if (i % 2 == 0)
      {
        x = x + (4/(i+1));
      }
      else if (i % 2 == 1)
      {
        x = x - (4/(i+1));
      }
    }
  }
  return x;
}

int main(void){
  int n;

  scanf("%d", &n);

  float x = deret(n);

  printf ("%.2lf", x);
}