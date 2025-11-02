//1's and 2's complement of a binary number
#include <stdio.h>
#include <math.h>
int binToDec(long long n){
    int i=0, res=0;
    while(n){
        res+= (n%10)<<i;
        n/=10;
        i++;
    }
    return res;
}
long long decToBin(int n){
    if(n==0 || n==1) {
        return n;
    }
    return decToBin(n/2)*10+n%2;
}


long long onesCom(long long n){
    if(n==0) return 0;
    return onesCom(n/10)*10+ !(n%10);
}
long long twosCom(long long n){
    long long res=onesCom(n);
    res=decToBin(binToDec(res)+1);
    return res;
}


int main(){
    long long n;
    printf("enter binary num : ");
    scanf("%lld",&n);
    int x;
    printf("1. 1's com 2. 2's com : ");
    scanf("%d",&x);
    long long res=0;
    if(x==1){
        res=onesCom(n);
    }
    else if(x==2) res= twosCom(n);
    else printf("enter a valid choice");
    printf("result = %lld\n",res);
    return 0;

}
