#include <stdio.h>
void increase(int height){
    for(int i=1;i<=height/2;i++){
        for(int j=1;j<(i*2);j++){
            printf("*");
        }
        printf("\n");
    }
}
void decrease(int height){
        for(int i=height/2;i>=1;i--){
        for(int j=1;j<(i*2);j++){
            printf("*");
        }
        printf("\n");
    }

}
void one_line(int n){
    for(int i=0;i<n;i++){
        printf("*");
    }
    printf("\n");
}
int main(){
    int num;
    printf("Enter height: ");
    scanf("%d",&num);
    printf("\n==========================\n");
    printf("INCREASE-DECREASE TRIANGLE\n");
    printf("==========================\n");
    increase(num);
    if(num%2) one_line(num);
    decrease(num);
    printf("==========================\n");
    printf("==========================\n");
    printf("DECREASE-INCREASE TRIANGLE\n");
    printf("==========================\n");
    if(num%2) one_line(num);
    decrease(num);
    increase(num);
    if(num%2) one_line(num);
    
    return 0;
}