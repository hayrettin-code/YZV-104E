#include <stdio.h>

struct ClientData {
    unsigned int account_num;
    char lastname[30];
    char firstname[30];
    double balance;
};

int main(){

    FILE* dosya1;

    if( (dosya1=fopen("case_study.dat","rb+")) == NULL){
        printf("Dosya (case_study.dat) acilamadi!");
        return 1;
    }
    else{
        struct ClientData hesap;
        struct ClientData boshesap = {0,"","",0.0};
        FILE* dosya2;
        unsigned int choice;
        printf("Enter request\n1-Writing current account reports\n2-Update an account\n3-Add a new account\n4-Delete an account\n5-End of run\n? ");
        scanf("%u",&choice);

        while(choice!=5){
            unsigned int girilen;
         switch(choice){
            case 1: 
            if( (dosya2=fopen("report.txt","w")) == NULL){
            printf("Dosya (report.txt) acilamadi!\n");
            return 1;
            }else{
                rewind(dosya1);
                fread(&hesap,sizeof(struct ClientData),1,dosya1);
                while(!feof(dosya1)){
                if(hesap.account_num != 0){
                    fprintf(dosya2,"%u %29s %29s %10.2lf\n",hesap.account_num,hesap.lastname,hesap.firstname,hesap.balance);
                }
                fread(&hesap,sizeof(struct ClientData),1,dosya1);
                }
            }
            fclose(dosya2);
            break;
            case 2:
            printf("Enter account number: ");
            scanf("%u",&girilen);
            fseek(dosya1,sizeof(struct ClientData)*(girilen-1),SEEK_SET);
            fread(&hesap,sizeof(struct ClientData),1,dosya1);
            if(hesap.account_num==0){
                printf("The %u. account is empty!\n",girilen);
            }else{
                double degisim;
                printf("Enter amount of balance change (- for withdraw & + for deposit): ");
                scanf("%lf",&degisim);
                hesap.balance += degisim;
                hesap.account_num = girilen;
                fseek(dosya1,sizeof(struct ClientData)*(hesap.account_num-1),SEEK_SET);
                fwrite(&hesap,sizeof(struct ClientData),1,dosya1);
            }
            break;
            case 3:
            printf("Enter the number of new account: ");
            scanf("%u",&girilen);
            fseek(dosya1,sizeof(struct ClientData)*(girilen-1),SEEK_SET);
            fread(&hesap,sizeof(struct ClientData),1,dosya1);
            if(hesap.account_num != 0 ){
                printf("The %u. account is already exist!\n",hesap.account_num);
            }else{
                hesap.account_num = girilen;
                printf("Enter last name, name, and balance: ");
                scanf("%29s%29s%lf",hesap.lastname,hesap.firstname,&hesap.balance);
                fseek(dosya1,sizeof(struct ClientData)*(hesap.account_num-1),SEEK_SET);
                fwrite(&hesap,sizeof(struct ClientData),1,dosya1);
            }
            break;
            case 4:
            printf("Enter deleting account number: ");
            scanf("%u",&girilen);
            fseek(dosya1,sizeof(struct ClientData)*(girilen-1),SEEK_SET);
            fread(&hesap,sizeof(struct ClientData),1,dosya1);
            if(hesap.account_num == 0){
                printf("The %u. account is already empty!\n",girilen);
            }else{
                 fseek(dosya1,sizeof(struct ClientData)*(girilen-1),SEEK_SET);
                 fwrite(&boshesap,sizeof(struct ClientData),1,dosya1);
            }
            break;
            case 5:
            break;
            default:
            printf("Undefined request!\n");
        }
            printf("New request\n? ");
            scanf("%u",&choice);
    }
        printf("Program stopped.\n");
        fclose(dosya1);
    }
    return 0;
}