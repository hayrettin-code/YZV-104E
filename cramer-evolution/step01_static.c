#include <stdio.h>
#include <stdlib.h>

int main(){
int a1=12,a2=2,b1=3,b2=-3,c1=15,c2=13;
double x= (double) (c1*b2-b1*c2)/(a1*b2-b1*a2);
double y= (double) (a1*c2-c1*a2)/(a1*b2-b1*a2);
printf("EQUATION1: (%d)x + (%d)y = %d",a1,b1,c1);
printf("\nEQUATION2: (%d)x + (%d)y = %d",a2,b2,c2);
printf("\nSOLUTION: x = (%.1lf), y = (%.1lf)",x,y);
return EXIT_SUCCESS;
}
