#include <stdio.h>

// function 
float fahrenheit_to_celcius(float fahrenheit) {
  return ((fahrenheit-32.0)*5.0/9.0);
}
// driver code 
int main(void) {
  float fahrenheit;
  printf("Enter the temprature in fahrenheit: ");
  scanf("%f", &fahrenheit);

  // passing parameter to function 
  printf("Temprature in degree celcius: %.2f", fahrenheit_to_celcius(fahrenheit));
  return 0;
}