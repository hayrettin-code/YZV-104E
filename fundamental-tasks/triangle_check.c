#include <stdio.h>

int main(){
int side1, side2, side3;
printf("Enter three sides: ");
scanf("%d %d %d", &side1, &side2, &side3);
if(((side1 > 0) && (side2 > 0) && (side3 > 0)) && ((side1+side2>side3) && (side1+side3>side2) && (side2+side3>side1))){
  if((side1 == side2) && (side1 == side3)){
    printf("EQUILATERAL");
  } else if((side1==side2) || (side1==side3) || (side2==side3)){
    printf("ISOSCALES");
  } else {
    printf("SCALENE");
  }
} else{
    printf("INVALID");
}
return 0;
}