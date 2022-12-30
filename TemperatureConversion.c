//Program to convert temperature in Degrees Celsius to Degrees Fahrenheit

#include <stdio.h>
int main()
{
    float deg_celsius, deg_fahrenheit;
  
    printf("\nEnter the temperature in Degrees Celsius: ");
    scanf("%f", &deg_celsius);

    deg_fahrenheit = (deg_celsius * 9 / 5) + 32;

    printf("\nThe temperature in Degrees Fahrenheit is: %.2f\n", deg_fahrenheit);
  
    return 0;
  
}
