//take int inputs untill user enters 999, also show the sum of positive numbers entered by user
#include <stdio.h>

int main(){
    int sum=0, n;
    while (scanf("%d",&n))
    {
        if(n==999) break;
        else if(n>0) sum+=n;
    }
    printf("sum is %d\n",sum);
    
    return 0;
}
