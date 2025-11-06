//check if a  number is prime
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int checkTill=sqrt(n);
    if(n<=1){
        printf("it's non prime\n");
        return 0;
    }else if(n==2){
        printf("it's a prime number\n");
        return 0;
    }
    for(int i=2;i<=checkTill;i++){
        if(n%i==0){
            printf("it's a non prime number\n");
            return 0;
        }
    }
    printf("it's a prime number\n");
    return 0;
}
