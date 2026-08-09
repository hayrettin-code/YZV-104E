#include <stdio.h>

int main(){
double gpa;
int income, research_score, vol_hours;
int result = 0;
printf("Enter GPA, income, research, volunteer: ");
scanf("%lf %d %d %d", &gpa, &income, &research_score, &vol_hours);
if (gpa < 3.0){
    result = 20;
}
    switch(result){
        case 20:
        printf("NONE");
        break;
        case 0:
        if (gpa >= 3.7){
          result += 3; 
        } else if (gpa >= 3.3){
           result += 2;
        } else{
           result += 1;
        }
    if (income < 4000)
    result += 2;
    else if (income < 8000)
    result += 1;

    if (research_score >= 80)
    result+= 2;
    else if (research_score >= 60)
    result += 1;

    if (vol_hours >= 100)
    result += 1;

    if (result >= 6){
        printf("FULL");
    } else if (result >= 4){
        printf("PARTIAL");
    } else if (result >= 2){
        printf("SMALL");
    } else {
       printf("NONE");
    }
    break;
   

}

return 0;

}