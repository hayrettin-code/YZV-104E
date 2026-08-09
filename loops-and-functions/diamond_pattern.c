#include <stdio.h>
void print_pyramide(int row){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}
void print__reverse_pyramide(int row){
    for(int i=row;i>=1;i--){
        for(int j=1;j<=row-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}
void karo(int num){
    print_pyramide(num);
    print__reverse_pyramide(num);
}
int main(){
    int row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    karo(row);
    return 0;
}