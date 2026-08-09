#include <stdio.h>

void armstrong(int x){
    int digit_num,num,sum,k,ctrl;
    for(k=1;k<=x;k++){
        sum=0;
        digit_num = 0;
        ctrl = k;
    while(ctrl!=0){
       ctrl = (ctrl-(ctrl%10))/10;
       digit_num++;
    }
    ctrl = k;
    for(int i=1;i<=digit_num;i++){
        num=1;
        for(int j=1;j<=digit_num;j++){
         num *= ctrl%10;
        }
        ctrl = (ctrl-(ctrl%10))/10;
        sum += num;
    }
    if (sum == k){
        printf("%d\n", k);
    }
    }
}

int main(){
    int a;
    scanf("%d",&a);
    armstrong(a);
    return 0;
}