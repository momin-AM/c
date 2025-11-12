#include <stdio.h>

void getAge(int *year, int *month, int *day){
    int cyear=2025, cmonth=11, cday=12;
    if(*day>cday){
        cday+=30;
        cmonth--;
    }
    if(*month>cmonth) {
        cmonth+=12;
        cyear--;
    }
    *year=cyear-*year;
    *month=cmonth-*month;
    *day=cday-*day;
}

int main(){
    int year, month, day;
    scanf("%d %d %d",&year,&month,&day);
    getAge(&year, &month, &day);
    printf("your age is %d years %d months %d days\n",year, month, day);
    return 0;
}
