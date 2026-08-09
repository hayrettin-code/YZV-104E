/**
   This program implements Cramer's Rule in C.
   It calculates solution for a system of
   two linear equations in two variables
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 3

void get_equations( int *a1, int *a2, int *b1, int *b2,
                    int *c1, int *c2, int next_slot);

double calculate_x_or_y( int *a1, int *a2, int *b1, int *b2,
                         int *c1, int *c2, int index, char x_or_y);

void print_equation( int *a1, int *a2, int *b1, int *b2,
                     int *c1, int *c2, int index,
                     double x, double y);

int main() {
  int a1[MAX_SIZE];
  int a2[MAX_SIZE];
  int b1[MAX_SIZE];
  int b2[MAX_SIZE];
  int c1[MAX_SIZE];
  int c2[MAX_SIZE];
  int current_size=0;

  double x;
  double y;
  char answer='y';

  do {
    printf("          -------\n");
    printf("          INPUT %d\n", current_size+1);
    printf("          -------");
    get_equations(a1, a2, b1, b2, c1, c2, current_size);
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
    x = calculate_x_or_y(a1, a2, b1, b2, c1, c2, i, 'x');
    y = calculate_x_or_y(a1, a2, b1, b2, c1, c2, i, 'y');

    print_equation(a1, a2, b1, b2, c1, c2, i, x, y);
  }
}

void get_equations(int *a1, int *a2, int *b1, int *b2,
                   int *c1, int *c2, int next_slot){

   printf("\nEnter a1, b1, and c1: ");
    scanf("%d %d %d", a1+next_slot, b1+next_slot, c1+next_slot);

    printf("Enter a2, b2, and c2: ");
    scanf("%d %d %d", a2+next_slot, b2+next_slot, c2+next_slot);

    while((*(a1+next_slot))*(*(b2+next_slot)) - (*(b1+next_slot))*(*(a2+next_slot)) == 0 ) {
        printf("\n(a1*b2-b1*a2) must be nonzero, ");
        printf("please try again!\n\n");

        printf("Enter a1, b1, and c1: ");
        scanf("%d %d %d", a1+next_slot, b1+next_slot, c1+next_slot);

        printf("Enter a2, b2, and c2: ");
        scanf("%d %d %d", a2+next_slot, b2+next_slot, c2+next_slot);

    }

}

double calculate_x_or_y( int *a1, int *a2, int *b1, int *b2,
                         int *c1, int *c2, int index, char x_or_y){

   switch(x_or_y){
     case 'x': return (1.0) * (*(c1+index)*(*(b2+index)) - *(b1+index)*(*(c2+index))) / (*(a1+index)*(*(b2+index)) - *(b1+index)*(*(a2+index)));
     case 'y': return (1.0) * (*(a1+index)*(*(c2+index)) - *(c1+index)*(*(a2+index))) / (*(a1+index)*(*(b2+index)) - *(b1+index)*(*(a2+index)));
     default:        
               printf("\nYou must pass either 'x' or 'y' for the x_or_y parameter\n");
               exit(1);
   }

 };

void print_equation(int *a1, int *a2, int *b1, int *b2,
                    int *c1, int *c2, int index, double x, double y){

  printf("\nEQUATION1: ");
  printf("%3dx %c %2dy = %3d\n", *(a1+index), *(b1+index)<0?'-':'+', abs(*(b1+index)), *(c1+index));
  printf("EQUATION2: ");
  printf("%3dx %c %2dy = %3d\n", *(a2+index), *(b2+index)<0?'-':'+', abs(*(b2+index)), *(c2+index));
  printf("\nSOLUTION: x = %3.1f and y = %3.1f\n", x, y);

};
