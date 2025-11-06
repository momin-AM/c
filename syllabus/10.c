//check if a  number is prime
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("enter number(till u want primes) : ");
    scanf("%d",&n);
    printf("2 ");
    for(int i=3;i<=n;i++){
        int isPrime=1;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime) printf("%d ",i);
    }
    return 0;
}
