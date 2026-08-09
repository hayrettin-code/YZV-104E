/**
   This program implements Cramer's Rule in C.
   It calculates solution for a system of
   two linear equations in two variables
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int a1,a2,b1,b2,c1,c2;

void get_equations();
double calculate_x_or_y(int a1, int a2, int b1, int b2, int c1, int c2, char x_or_y);
void print_equation(int a1, int a2, int b1, int b2, int c1, int c2, double x, double y);

int main() {
     double x;
     double y;

     get_equations();
     x = calculate_x_or_y(a1, a2, b1, b2, c1, c2, 'x');
     y = calculate_x_or_y(a1, a2, b1, b2, c1, c2, 'y');

     print_equation(a1, a2, b1, b2, c1, c2, x, y);
}

void get_equations(){
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

}

double calculate_x_or_y(int a1, int a2, int b1, int b2, int c1, int c2, char x_or_y){
   switch(x_or_y){
     case 'x': return (1.0) * (c1*b2 - b1*c2) / (a1*b2 - b1*a2);
     case 'y': return (1.0) * (a1*c2 - c1*a2) / (a1*b2 - b1*a2);
     default:
               printf("\nYou must pass either 'x' or 'y' for the x_or_y parameter\n");
               exit(1);
   }
};

void print_equation(int a1, int a2, int b1, int b2, int c1, int c2, double x, double y){
  printf("\nEQUATION1: ");
  printf("%3dx %c %2dy = %3d\n", a1, b1<0?'-':'+', abs(b1), c1);
  printf("EQUATION2: ");
  printf("%3dx %c %2dy = %3d\n", a2, b2<0?'-':'+', abs(b2), c2);
  printf("\nSOLUTION: x = %3.1f and y = %3.1f\n", x, y);
};
