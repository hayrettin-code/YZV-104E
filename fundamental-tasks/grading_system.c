#include <stdio.h>
#include <stdbool.h>

int main(){
double midterm, final, makeup;
double grade = 0;
bool ctrl = true;
printf("Enter midterm, final, makeup: ");
scanf("%lf %lf %lf", &midterm, &final, &makeup);
if (final >= 40){
    grade = (0.4 * midterm) + (0.6 * final); 
} else if ((final < 40) && (makeup >= 60)){
    grade = (0.4 * midterm) + (0.6 * makeup); 
} else {
    ctrl = false;
}
switch(ctrl){
case true:
printf("Average: %.02lf\n", grade);
if (grade >= 90){
    printf("AA\n");
} else if(grade >= 80){
    printf("BA\n");
} else if(grade >= 70){
    printf("BB\n");
} else if(grade >= 60){
    printf("CC\n");
} else if(grade >= 50){
    printf("DD\n");
} else {
    printf("FF\n");
}
break;

case false:
printf("FF\n");
break;
}


if ((grade >= 85) && (final >= 80) && (midterm >= 80))
printf("HONOR");

return 0;


}