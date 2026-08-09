#include <stdio.h>

int total_day(int d1,int m1,int y1) {
    int total=0;
    total += ((y1-1)/ 4)-((y1-1) / 100)+((y1-1) / 400)+((y1-1) * 365);
    switch(m1){
        case 1:
        total += d1;
        break;
        case 2:
        total += 31 + d1;
        break;
        case 3:
        if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
        total += 60 + d1;
        else
        total += 59 + d1;
        break;
        case 4:
        if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
        total += 91 + d1;
        else
        total += 90 + d1;
        break;
        case 5:
        if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
        total += 121 + d1;
        else
        total += 120 + d1;
        break;
        case 6:
        if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
        total += 152 + d1;
        else
        total += 151 + d1;
        break;
        case 7:
        if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
        total += 182 + d1;
        else
        total += 181 + d1;
        break;
        case 8:
        if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
        total += 213 + d1;
        else
        total += 212 + d1;
        break;
        case 9:
        if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
        total += 244 + d1;
        else
        total += 243 + d1;
        break;
        case 10:
        if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
        total += 274 + d1;
        else
        total += 273 + d1;
        break;
        case 11:
        if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
        total += 305 + d1;
        else
        total += 304 + d1;
        break;
        case 12:
        if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
        total += 335 + d1;
        else
        total += 334 + d1;
        break;
        }

    return total;
}

int day_diff(int d1,int m1,int y1,int d2,int m2,int y2){
    int total1,total2;
    total1 = total_day(d1,m1,y1);
    total2 = total_day(d2,m2,y2);
    if (total1<=total2)
    return total2-total1;
    else
    return total1-total2;
}

int main(){
  int d1,d2,m1,m2,y1,y2;
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d",&d1,&m1,&y1);
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d",&d2,&m2,&y2);
    printf("%d", day_diff(d1,m1,y1,d2,m2,y2));
}