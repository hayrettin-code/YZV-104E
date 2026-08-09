#include <stdio.h>

int main(){
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    switch(number){
        case 0:
        printf("ZERO");
        break;
        default:
        if(number < 0){
            printf("NEGATIVE");
        } else {
            printf("POSITIVE");
        }
        break;
    }
    return 0;

}