#include <stdio.h>

int main(){
    double temp;
    printf("Enter temperature: ");
    scanf("%lf", &temp);
    if(temp < 0){
        printf("FREEZING");
    } else if(temp <= 15){
        printf("COLD");
    } else if(temp <= 25){
        printf("NORMAL");
    } else{
        printf("HOT");
    }
    return 0;
}