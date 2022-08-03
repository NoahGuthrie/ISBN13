#include <stdio.h>

int main(void) {

int i = 1,b;
int sum = 0;
int check;
int remainder = 0;
long int digit, ISBN;

puts("Please enter the first twelve digits of an ISBN-13 number");
scanf("%ld", &ISBN);

digit = ISBN;
while(digit > 0){
  b = digit % 10;
  if(i % 2 == 0){
    sum = sum + b;
    i = 1;  
  }
  else{
    sum = sum + (b * 3);
    i = 2;
  }
  digit = digit / 10;
}
remainder = sum % 10;
check = 10 - remainder;
printf("Check digit: %d", check);
}
