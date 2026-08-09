#include <stdio.h>
#include <math.h>

int main(){
int height;
printf("Enter height: ");
scanf("%d",&height);

for(int i=1;i<=height;i+=2){
    for(int j=1;j<=i;j++){
         printf("*");
    }
    
printf("\n");
}
for(int i= height%2==0? height-1:height-2;i>0;i-=2){
    for(int j=1;j<=i;j++){
         printf("*");
    }
    
printf("\n");
}

    return 0;
}