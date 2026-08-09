#include <stdio.h>

int main(){
    int type, hours, zone;
    int ctrl = 1;
    double total = 0;
    printf("Enter type, hours, zone: ");
    scanf("%d %d %d", &type, &hours, &zone);
    switch(type){
            case 1:
            total = hours * 5;
            break;
            case 2:
            total = hours * 10;
            break;
            case 3:
            total = hours * 20;
            break;
            default:
            ctrl = 0;
            break;
        }
        if(hours > 5){
            total = (9.0/10) * total;
        }
    switch(zone){
        case 0:
        break;
        case 1:
        if(type == 3){
            ctrl = 0;
        }else{
            total = total + 15;
        }
        break;
        default:
        ctrl = 0;
        break;
    }
    if(ctrl == 1){
        printf("%d\n", (int) total);
    } else {
        printf("INVALID\n");
    }
return 0;
    

}