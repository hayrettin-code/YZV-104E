#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_SIZE 20
void swap(int *first, int *second) {
int temp = *first;
*first = *second;
*second = temp;
}
void random_fill_array(int *arr) {
for(int i=0;i<ARRAY_SIZE;i++){
    *(arr+i) = i;
}
for(int i=ARRAY_SIZE-1;i>=0;i--){
    int j=rand() % (i+1);
    swap((arr+j),(arr+i));
}
}
int main() {
    srand(time(NULL));
int my_array[ARRAY_SIZE];
random_fill_array(my_array);
printf("ORIGINAL ARRAY: ");
for (int i = 0; i < ARRAY_SIZE; printf("%-5d", my_array[i++]));
printf("\n");
for(int i=0;i<ARRAY_SIZE/2;i++){
swap((my_array+i),(my_array+ARRAY_SIZE-i-1));
}
printf("REVERSE ARRAY: ");
for (int i = 0; i < ARRAY_SIZE; printf("%-5d", my_array[i++]));
printf("\n");
return EXIT_SUCCESS;
}