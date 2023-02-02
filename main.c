#include <stdio.h>

int main(void) {
  float fahrenheit, temprature;
  printf("Enter the temprature in fahrenheit: ");
  scanf("%f",&fahrenheit);

  // formula 
  temprature = ((fahrenheit - 32.0) * 5.0/9.0);
  
  printf("Temprature in degree celcius: %.2f", temprature);
  return 0;
}