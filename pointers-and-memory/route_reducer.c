#include <stdio.h>
#include <stdlib.h>

int* reduce(int* dizi,int n){
    
    for(int i=0;i<n;i++){
    if(*(dizi+i)==-1){
    *(dizi+i)=0;
    continue;
    }
        if(dizi[i]==-1){
            dizi[i-1]=0;
            dizi[i]=0;
        }
    }
    int k=0;
    for(int j=0;j<n;j++){
      if(dizi[j]!=0){
        dizi[k]=dizi[j];
        k++;
      }
    }
return dizi;
}

int main(){
    int n,count=0;
    scanf("%d",&n);
    int* road= (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",road+i);
        if(*(road+i)==-1)
        count+=2;
    }
    for(int i=0;i<n;i++){
    if(*(road+i)==-1){
    count--;
    }
    else
    break;
    
}
    road = reduce(road,n);
    road = realloc(road,(n-count)*sizeof(int));
    printf("Final Route: ");
    for(int i=0;i<n-count;i++){
        printf("%d ",*(road+i));
    }
    printf("\nTotal Cities: %d",n-count);
    free(road);

    return EXIT_SUCCESS;

}