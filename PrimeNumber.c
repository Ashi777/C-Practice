//Program to check if the number is prime or not

#include <stdio.h>

int main() 
{
  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) 
  {
    if (n % i == 0) 
    {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    printf("%d is a Prime Number.", n);
  else
    printf("%d is not a Prime Number.", n);

  return 0;
}
