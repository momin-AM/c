//binary addition, substraction, multiplication, devision
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
long long decToBin(int n){
    if(n==0 || n==1) {
        return n;
    }
    return decToBin(n/2)*10+n%2;
}


int main(){
    long long a,b;
    char sign;
    printf("enter expression: ");
    scanf("%lld %c %lld",&a,&sign,&b);
    long long res=0;
    int x=binToDec(a);
    int y=binToDec(b);
    switch (sign)
    {
    case '+':
        res=decToBin(x+y);
        break;
    case '-':
        res=decToBin(x-y);
        break;
    case '*':
        res=decToBin(x*y);
        break;
    case '/':
        res=decToBin(x/y);
        break;
    
    default:
        break;
    }
    printf("result : %lld\n",res);
    return 0;
}
