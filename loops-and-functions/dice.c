#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    long int results[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    long int n;
    int percentage;
    printf("Enter the number of repeats: ");
    scanf("%ld",&n);
    srand(time(NULL));

    for(long int i=0;i<n;i++){
       results[2 + rand()%6 + rand()%6]++;
    }

long int most=-1;
int number;

 for(int i=2;i<13;i++){
   if(most<results[i]) {most=results[i]; number = i;  }
 }

printf("\n*************** DISTRIBUTION ****************\n\n");

for(long int i=2;i<13;i++){
percentage = results[i]*100/n;    
printf(" %2ld : %9ld   (%2d%%)   ",i,results[i],percentage);
for(long int k=0;k<percentage;k++){ printf("*"); }
printf("\n");

}

printf("\nMostly, the number %d is observed. \n\n",number);
return 1;
}