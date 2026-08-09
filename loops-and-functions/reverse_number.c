#include <stdio.h>
#include <math.h>

int main(){
long int number;
printf("Enter an integer: ");
scanf("%ld",&number);
long int digit;
while(number != 0){
digit = number % 10;
number /= 10;
printf("%ld",digit);
}




    return 0;
}