//convert binary to decimal
#include <stdio.h>
#include <math.h>
int binToDec(long long n){
    int i=0, res=0;
    while(n){
        res+= n%10* pow(2,i++);
        n/=10;
    }
    return res;
}

int main(){
    long long n;
    printf("enter binary : ");
    scanf("%lld",&n);
    int res=binToDec(n);
    printf("result is : %d\n",res);
    return 0;
}
