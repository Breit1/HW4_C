#include <stdio.h>

int main(){
    int year, mounth, January, February, March, April, May, June, July, August, September, October, November, December;
    January = 31;
    February = 28;
    March = 31;
    April = 30;
    May = 31;
    June = 30;
    July = 31;
    August = 31;
    September = 30;
    October = 31;
    November = 30;
    December = 31;
    scanf("%d", &mounth, &year);
    if (mounth==1){
        printf("%d", January);
    }else if (mounth==2 && (year%400 == 0 || (year%4 == 0 & year%0 != 0 ))){
        printf("%d", 29);
    }else if (mounth==2){
        printf("%d", February);
    }else if (mounth==3){
        printf("%d", March);
    }else if (mounth==4){
        printf("%d", April);
    }else if (mounth==5){
        printf("%d", May);
    }else if (mounth==6){
        printf("%d", June);
    }else if (mounth==7){
        printf("%d", July);
    }else if (mounth==8){
        printf("%d", August);
    }else if (mounth==9){
        printf("%d", September);
    }else if (mounth==7){
        printf("%d", October);
    }else if (mounth==8){
        printf("%d", November);
    }else if (mounth==9){
        printf("%d", December);
    }

    return 0;
}