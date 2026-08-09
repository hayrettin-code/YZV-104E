#include <stdio.h>
#include <stdbool.h>


bool is_prime(long long n){
    long long counter=0;
 for (long long i=2;i<n;i++){
            if(n % i == 0){
                counter++;
            }
        }
if (counter == 0)
return true;
else
return false;
    
        
}

long long prime1(long long n){
        long long prime = 2,counter = 0;
    
    while (true){
        if (is_prime(prime)){
            counter++;
        } 
        if(counter == n){
            break;
        } else 
        prime++;
        }
return prime;
}


long long prime2(long long n){
    long long i = 1;
    while(true){
       if(n == prime1(i)){
          break;
       } else
       i++;
    }
    return i;
}

int main(){
    int a;
    long long number;
    printf("Enter operation (0 for nth prime / 1 for which prime) : ");
    scanf("%d",&a);
    if(a == 0){
        printf("Enter a number: ");
        scanf("%lld", &number);
        printf("%lld. prime number is %lld", number , prime1(number));
    } else if(a == 1){
        printf("Enter a number: ");
        scanf("%lld", &number);
        if(is_prime(number))
        printf("%lld is the %lld. prime number", number, prime2(number));
        else
        printf("%lld is not a prime number!", number);
    }else
    printf("Invalid operation!");
    
}
    


    
