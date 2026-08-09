#include <stdio.h>
#include <math.h>
#define CAPACITY 1000
int main(){
    int sayi;
    double grades[CAPACITY],not,ort=0,var=0,absd=0;
    printf("How many students in class: ");
    scanf("%d",&sayi);
    if(sayi<CAPACITY){
        printf("\n");
    for(int i=0;i<sayi;i++){
        printf("Enter grade of student #%d : ",i+1);
        scanf("%lf",&not);
        grades[i]=not;
    }
    for(int i=0;i<sayi;i++){
        ort += grades[i];
    }
    ort /= sayi;
    for(int i=0;i<sayi;i++){
        var += pow((grades[i]-ort), 2);
    }
    var /= sayi;
    for(int i=0;i<sayi;i++){
        absd += fabs(grades[i]-ort);
    }
    absd /= sayi;

    
    
    printf("\nAverage             = %lf",ort);
    printf("\nVariance            = %lf",var);
    printf("\nStandard Deviation  = %lf",sqrt(var));
    printf("\nAbsolute Deviation  = %lf",absd);
    }
    return 0;

}