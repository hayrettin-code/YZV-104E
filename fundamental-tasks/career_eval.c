#include <stdio.h>

int main(){
    int status, exp_in, exp, salary;
    double gpa;
    printf  ("Enter status: ");
    scanf("%d", &status);
    switch(status){
        case 1:
        printf("Enter GPA and internship experience: ");
        scanf("%lf %d", &gpa, &exp_in);
        if (gpa < 2.5){
            printf("NEEDS_IMPROVEMENT");
        } else if ((gpa >= 3.5) && (exp_in == 1)){
            printf("READY_FOR_INDUSTRY");
        } else {
            printf("KEEP_BUILDING_SKILLS");
        }
        break;
        case 2:
        printf("Enter years of experience and salary: ");
        scanf("%d %d", &exp, &salary);
        if (exp < 2){
            printf("JUNIOR_LEVEL");
        } else if ((exp >= 5) && (salary < 15000)){
            printf("UNDERPAID");
        } else if ((exp >= 5) && (salary >= 15000)){
            printf("SENIOR_LEVEL");
        } else {
            printf("MID_LEVEL");
        }
        break;
        default:
        printf("INVALID STATUS!");
        break;


    }
    return 0;
}
