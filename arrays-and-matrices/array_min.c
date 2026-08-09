#include <stdio.h>
#define CAPACITY 1000
int main(){
    double input=0,max;
    int current_size =0;
    double values[CAPACITY];
    printf("Enter numbers (type 0 to quit): ");
    scanf("%lf", &input);
    while(current_size<CAPACITY && input > 0){
        values[current_size] = input; 
        current_size++;
        printf("Enter next number: ");
        scanf("%lf",&input);
    }
    max = values[0];
for(int i=1;i<current_size;i++){
if(values[i]<max)
max = values[i];
}
printf("The minimum element of the array is: %.2lf",max);
return 0;
}
