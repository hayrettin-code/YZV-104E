#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int a1,a2,b1,b2,c1,c2;
printf("Enter a1, b1 and c1: ");
scanf("%d %d %d",&a1,&b1,&c1);
printf("Enter a2, b2 and c2: ");
scanf("%d %d %d",&a2,&b2,&c2);
double x= (double) (c1*b2-b1*c2)/(a1*b2-b1*a2);
double y= (double) (a1*c2-c1*a2)/(a1*b2-b1*a2);
if(b1<0){
    printf("\nEQUATION1: %3dx - %3dy = %3d",a1,abs(b1),c1);
}else{
    printf("\nEQUATION1: %3dx + %3dy = %3d",a1,b1,c1);
}
if(b2<0){
   printf("\nEQUATION2: %3dx - %3dy = %3d",a2,abs(b2),c2);
}else{
    printf("\nEQUATION2: %3dx + %3dy = %3d",a2,b2,c2);
}

printf("\n\nSOLUTION: x = %.1lf and y = %.1lf",x,y);
return EXIT_SUCCESS;
}
