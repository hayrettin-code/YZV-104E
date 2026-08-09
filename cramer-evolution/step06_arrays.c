/**
   This program implements Cramer's Rule in C.
   It calculates solution for a system of
   two linear equations in two variables
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 3

int a1[MAX_SIZE];
int a2[MAX_SIZE];
int b1[MAX_SIZE];
int b2[MAX_SIZE];
int c1[MAX_SIZE];
int c2[MAX_SIZE];

void get_equations(int i);
double calculate_x_or_y(int a1, int a2, int b1, int b2, int c1, int c2, char x_or_y);
void print_equation(int a1, int a2, int b1, int b2, int c1, int c2, double x, double y);

int main() {
    double x;
    double y;
    char devam;
    int c = 0;

    while (c < MAX_SIZE) {
        printf("     ----------\n");
        printf("      INPUT %d\n", c + 1);
        printf("     ----------\n");
        get_equations(c);
        c++;
        if (c == MAX_SIZE) {
            break;
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &devam);
        
        if (devam == 'n') {
            break;
        }
    }

    for (int i = 0; i < c; i++) {
        x = calculate_x_or_y(a1[i], a2[i], b1[i], b2[i], c1[i], c2[i], 'x');
        y = calculate_x_or_y(a1[i], a2[i], b1[i], b2[i], c1[i], c2[i], 'y');
        printf("\n----------------------------------\n");
        printf("EQUATIONS AND SOLUTION FOR INPUT %d", i + 1);
        printf("\n----------------------------------\n");
        print_equation(a1[i], a2[i], b1[i], b2[i], c1[i], c2[i], x, y);
    }

    return 0;
}

void get_equations(int i){
    printf("Enter a1, b1, and c1: ");
    scanf("%d %d %d", &a1[i], &b1[i], &c1[i]);

    printf("Enter a2, b2, and c2: ");
    scanf("%d %d %d", &a2[i], &b2[i], &c2[i]);

    while( (a1[i]*b2[i] - b1[i]*a2[i]) == 0 ) {
        printf("\n(a1*b2-b1*a2) must be nonzero, ");
        printf("please try again!\n\n");

        printf("Enter a1, b1, and c1: ");
        scanf("%d %d %d", &a1[i], &b1[i], &c1[i]);

        printf("Enter a2, b2, and c2: ");
        scanf("%d %d %d", &a2[i], &b2[i], &c2[i]);
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
}

void print_equation(int a1, int a2, int b1, int b2, int c1, int c2, double x, double y){
  printf("\nEQUATION1: ");
  printf("%3dx %c %2dy = %3d\n", a1, b1<0?'-':'+', abs(b1), c1);
  printf("EQUATION2: ");
  printf("%3dx %c %2dy = %3d\n", a2, b2<0?'-':'+', abs(b2), c2);
  printf("\nSOLUTION: x = %3.1f and y = %3.1f\n", x, y);
}