/**
   This program implements Cramer's Rule in C.
   It calculates solution for a system of
   two linear equations in two variables
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double calculate_x_or_y(int a1, int a2, int b1, int b2, int c1, int c2, char x_or_y);
void print_equation(int a1, int a2, int b1, int b2, int c1, int c2, double x, double y);

int main() {
     int a1;
     int a2;
     int b1;
     int b2;
     int c1;
     int c2;

     double x;
     double y;


     printf("Enter a1, b1, and c1: ");
     scanf("%d %d %d", &a1, &b1, &c1);

     printf("Enter a2, b2, and c2: ");
     scanf("%d %d %d", &a2, &b2, &c2);

     while( (a1*b2-b1*a2)==0 ) {
       printf("\n(a1*b2-b1*a2) must be nonzero, ");
       printf("please try again!\n\n");

       printf("Enter a1, b1, and c1: ");
       scanf("%d %d %d", &a1, &b1, &c1);

       printf("Enter a2, b2, and c2: ");
       scanf("%d %d %d", &a2, &b2, &c2);
     }

     x = calculate_x_or_y(a1, a2, b1, b2, c1, c2, 'x');
     y = calculate_x_or_y(a1, a2, b1, b2, c1, c2, 'y');

     print_equation(a1, a2, b1, b2, c1, c2, x, y);
}

double calculate_x_or_y(int a1, int a2, int b1, int b2, int c1, int c2, char x_or_y){
if(x_or_y == 'x') return (double) (c1*b2-b1*c2)/(a1*b2-b1*a2);
if(x_or_y == 'y') return (double) (a1*c2-c1*a2)/(a1*b2-b1*a2);
};

void print_equation(int a1, int a2, int b1, int b2, int c1, int c2, double x, double y){
if(b1<0){
    printf("\nEQUATION1: %3dx - %2dy = %3d",a1,abs(b1),c1);
}else{
    printf("\nEQUATION1: %3dx + %2dy = %3d",a1,b1,c1);
}
if(b2<0){
   printf("\nEQUATION2: %3dx - %2dy = %3d",a2,abs(b2),c2);
}else{
    printf("\nEQUATION2: %3dx + %2dy = %3d",a2,b2,c2);
}

printf("\n\nSOLUTION: x = %.1lf and y = %.1lf",x,y);

};
