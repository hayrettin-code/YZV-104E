/**
   This program implements Cramer's Rule in C.
   It calculates solution for a system of
   two linear equations in two variables
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 3
 

typedef struct  {
     int a1, b1, c1, a2, b2, c2;
     double x, y;
}  Equation ;

void get_equations     ( Equation *eq, int index );
void calculate_x_and_y ( Equation *eq, int index );
void print_equation    ( Equation *eq, int index );

int main() {
  Equation equations[MAX_SIZE];
  int current_size=0;
  char answer='y';

  do {
    printf("          -------\n");
    printf("          INPUT %d\n", current_size+1);
    printf("          -------");
    get_equations(equations, current_size);
    calculate_x_and_y(equations, current_size);
    current_size++;
    if(current_size<MAX_SIZE){
       printf("\nDo you want to continue? (y/n): ");
       scanf(" %c", &answer);
    }
    else{
       break;
    }
  } while( (answer=='y')  );

  for(int i=0; i<current_size; i++){
    printf("\n----------------------------------\n");
    printf("EQUATIONS AND SOLUTION FOR INPUT %d\n", i+1);
    printf("----------------------------------");
    print_equation(equations, i);
  }
};

void get_equations(Equation *eq, int index){
      printf("\nEnter a1, b1, and c1: ");
    scanf("%d %d %d", &eq[index].a1, &eq[index].b1, &eq[index].c1);

    printf("Enter a2, b2, and c2: ");
    scanf("%d %d %d", &eq[index].a2, &eq[index].b2, &eq[index].c2);

    while( (eq[index].a1*eq[index].b2 - eq[index].b1*eq[index].a2) == 0 ) {
        printf("\n(a1*b2-b1*a2) must be nonzero, ");
        printf("please try again!\n\n");

        printf("Enter a1, b1, and c1: ");
        scanf("%d %d %d", &eq[index].a1, &eq[index].b1, &eq[index].c1);

        printf("Enter a2, b2, and c2: ");
        scanf("%d %d %d",  &eq[index].a2, &eq[index].b2, &eq[index].c2);
    }
};

void calculate_x_and_y( Equation *eq, int index){
  
   eq[index].x = (1.0) * (eq[index].c1*eq[index].b2 - eq[index].b1*eq[index].c2) / (eq[index].a1*eq[index].b2 - eq[index].b1*eq[index].a2);
   eq[index].y = (1.0) * (eq[index].a1*eq[index].c2 - eq[index].c1*eq[index].a2) / (eq[index].a1*eq[index].b2 - eq[index].b1*eq[index].a2);
      
   
};

void print_equation(Equation *eq, int index){
  printf("\nEQUATION1: ");
  printf("%3dx %c %2dy = %3d\n", eq[index].a1, eq[index].b1<0?'-':'+', abs(eq[index].b1), eq[index].c1);
  printf("EQUATION2: ");
  printf("%3dx %c %2dy = %3d\n", eq[index].a2, eq[index].b2<0?'-':'+', abs(eq[index].b2), eq[index].c2);
  printf("\nSOLUTION: x = %3.1f and y = %3.1f\n", eq[index].x, eq[index].y);
};
