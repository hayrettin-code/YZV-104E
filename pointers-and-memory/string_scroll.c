#include <stdio.h>
void scroll(char*,int);
int main()
{
    char a[7]= {'Y','a','z','i','l','i','m'};
    scroll(a,7);
    return 0;
}
void scroll(char* a, int size){
for(int k=0;k<size;k++){
        printf("%c",*(a+k));
    }
    printf("\n");
    char temp;
for(int i=0;i<size;i++){
    temp = *a;
    for(int j=0;j<size-1;j++){
      *(a+j)=*(a+j+1);
    }
    *(a+size-1)=temp;
    for(int k=0;k<size;k++){
        printf("%c",*(a+k));
    }
    printf("\n");
}
}
