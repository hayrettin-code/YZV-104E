#include <stdio.h>
#include <math.h>

int main(){
long int number;
printf("Enter an integer: ");
scanf("%ld",&number);
long int i=0;
long int sum = 0;
long int digit;
do{
digit = number % 10;
sum += digit;
number = (number-digit)/10;
if(number != 0) i++;
}while(number !=0);
printf("Number: %ld\n",i+1);
printf("Sum: %ld\n",sum);

    return 0;
}