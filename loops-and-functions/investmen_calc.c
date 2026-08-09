#include <stdio.h>
float investment (float rate,float inv){
    return inv + ( inv * (rate/100) );
}
int main(){
int year;
float inv,rate;
printf("Enter value of investment: ");
scanf("%f",&inv);
printf("Enter rate of return: ");
scanf("%f",&rate);
printf("Enter number of year: ");
scanf("%d",&year);
 printf("Year    Value\n");
 printf("====  =========\n");
 for(int i=1;i<=year;i++){
    printf("%3d  %9.2f\n",i,investment(rate,inv));
    inv = investment(rate,inv);
 }


    return 0;
}
