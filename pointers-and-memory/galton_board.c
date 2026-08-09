#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
const int BALL = 1000;
int* count[10];
int r;
srand(time(NULL));
for(int i=0;i<10;i++){
    count[i] = (int*) malloc((i+1)*sizeof(int));
    for(int j=0;j<=i;j++){
        count[i][j]=0;
    }
}
for(int k=0;k<BALL;k++){
count[0][0]++;
int j=0;
for(int i=1;i<10;i++){
r = rand() % 2;
if(r==1){
    j++;
}
count[i][j]++;
}
}
for(int i=0;i<10;i++){
    for(int j=0;j<=i;j++){
        printf("%5d",count[i][j]);
    }
    printf("\n");
}
for(int i=0;i<10;i++){
    free(count[i]);
}

    return 0;
}