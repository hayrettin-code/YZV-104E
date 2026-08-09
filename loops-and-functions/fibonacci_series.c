#include <stdio.h>
int fibo(int n){
    if((n==0) || (n==1)) return 1;
    else return (fibo(n-2) + fibo(n-1));
}
int main(){
    int N;
printf("Enter N for Fibonacci series: ");
scanf("%d",&N);
if(N<0) printf("Number cannot be negative!");
else if(N>46) printf("FUCK YOU!");
else{
    printf("Fibonacci series from Fib(0) to Fib(%d) is: ",N);
    for(int i=0;i<=N;i++){
        printf("%d ",fibo(i));
    }
}
printf("\n");
return 1;
}