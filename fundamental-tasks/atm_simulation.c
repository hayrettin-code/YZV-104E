#include <stdio.h>

int main(){
    int choice;
    double balance = 500.00;
    double amount;
    printf("Enter choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        printf("$%.2lf", balance);
        break;
        case 2:
        printf("Enter amount: ");
        scanf("%lf", &amount);
        printf("$%.2lf", balance + amount);
        break;
        case 3:
        printf("Enter amount: ");
        scanf("%lf", &amount);
        if(balance - amount >= 0){
            printf("$%.2lf", balance - amount);
        } else {
            printf("ERROR");
        }


    }
}