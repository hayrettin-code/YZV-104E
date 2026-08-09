#include <stdio.h>
struct data{
    unsigned int num;
    char soyisim[30];
    char isim[30];
    double bakiye;
};

int main(){

FILE * dosya;
dosya = fopen("case_study.dat","wb");
struct data boshesap = {0,"","",0.0};
for(int i=0;i<100;i++){
    fwrite(&boshesap,sizeof(struct data),1,dosya);
}
fclose(dosya);
    return 0;
}