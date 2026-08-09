#include <stdio.h>
int main(){
    int income, size, usage, elder;
    int point = 0;

    printf("Enter income, household size, elderly, usage: ");
    scanf("%d %d %d %d", &income, &size, &elder, &usage);
if (income > 15000){
    printf("NOT_ELIGIBLE");
} else{

    if (income <= 5000){
        point += 3;
    } else if (income <= 9000){
        point += 2;
    } else{
        point += 1;
    }

    if (size >= 5){
        point += 2;
    } else if (size >=3){
        point += 1;
    }

    if (elder == 1){
        point += 2;
    }

    if (usage > 600){
        point -= 1;
    }

    if ((usage > 800) && (elder == 1)){
        printf("EMERGENCY_SUPPORT");
    } else if (point >= 6){
        printf("FULL_SUPPORT");
    } else if (point >= 4){
        printf("PARTIAL_SUPPORT");
    } else if (point >= 2){
        printf("LIMITED_SUPPORT");
    } else{
        printf("NO_SUPPORT");
    }
}

return 0;
}