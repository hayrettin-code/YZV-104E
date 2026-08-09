#include <stdio.h>
int pow(int b,int p){
    if(p==0) return 1;
    return (b*(pow(b,p-1)));
}
int main(){
    int num,p;
printf("Enter number: ");
scanf("%d",&num);
printf("Enter power: ");
scanf("%d",&p);
printf("The value of %d to power %d is: %d",num,p,pow(num,p));
    return 0;
}