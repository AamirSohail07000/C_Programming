// 2. Write a function to convert Celsius temperature into Fahrenheit.
#include <stdio.h>

float converter(int c);
float converter(int c){
  return ((c*9/5.0)+32);
}
int main(){
  float c = 45;
  printf("Temperature in Farenheit for %.2f degree C is %.2f degree F",c, converter(c));
  return 0;
}
