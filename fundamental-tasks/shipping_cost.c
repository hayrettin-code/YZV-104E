#include <stdio.h>

int main(){
    int weight, distance, based_cost;
    printf("Enter weight and distance: ");
    scanf("%d %d", &weight , &distance);
if(weight <= 5){
    based_cost = 20;
}else {
    based_cost = 40;
}
if(distance <= 100){
    printf("%d", based_cost);
} else{
    printf("%d", based_cost + 30);
}
return 0;
}