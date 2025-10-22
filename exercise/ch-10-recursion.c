//recursions
#include <stdio.h>

// 10.1 sum of digits

int getSum(int n){
    if(n%10==0){
        return n;
    }
    return n%10+getSum(n/10);
}

int main(){
    int n;
    scanf("%d",&n);
    int res=getSum(n);
    printf("sum is : %d\n",res);
    return 0;
}

//10.2 Get prime factors of a number

void showPrimes(int n,int i){
    if(i<=n){
        if(n%i==0){
            printf("%d ",i);
            n/=i;
        }else{
            i++;
        }
        showPrimes(n,i);
    }

}

int main(){
    int n,i=2;
    scanf("%d",&n);
    showPrimes(n,i);
    return 0;
}

//10.3 get first 25 numbers of  a fibonacci sequence

int fibonacci(int n){
    if(n==1 || n==0) {
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}


int main(){
    for(int i=0;i<25;i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}

//B-a int to binary

int getBin(int n){
    if(n==0 || n==1) {
        printf("%d ",n);
        return n;
    }
    int res=getBin(n/2);
    printf("%d ",n%2);
    return res;
}

int main(){
    int n;
    scanf("%d",&n);
    int res=getBin(n);
    // printf("%d \n",res);
    return 0;
}
