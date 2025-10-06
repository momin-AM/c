//chapter -8 : Functions in c
#include <stdio.h>

//8.1 - get factporial 

// int fact(int n){
//     int result=1;
//     if(n==0 || n==1) return 1;
//     for(int i=2;i<=n;i++){
//         result*=i;
//     }
//     return result;
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("factorial of %d is %d",n,fact(n));
//     return 0;
// }

//8.2 - power func

// float power(float n,int p){
//     float res=1;
//     if(n==0){
//         return 0;
//     }
//     for(int i=0;i<p;i++){
//         res*=n;
//     }
//     if(n<0){
//         res=1/res;
//     }
//     return res;
// }

// int main(){
//     float n;
//     int p;
//     scanf("%f %d",&n,&p);
//     printf("%f^%d = %f",n,p,power(n,p));
//     return 0;
// }

//8.3 - decimal year to roman year

// void romanise(int x,char y){
//     for(int i=0;i<x;i++){
//         printf("%c",y);
//     }
//     return ;
// }
// int main(){
//     int year;
//     scanf("%d",&year);
//     int m,d,c,l,x,v,i;
//     m=year/1000;
//     romanise(m,'m');
//     year%=1000;
//     d=year/500;
//     romanise(d,'d');
//     year%=500;
//     c=year/100;
//     romanise(c,'c');
//     year%=100;
//     l=year/50;
//     romanise(l,'l');
//     year%=50;
//     x=year/10;
//     romanise(x,'x');
//     year%=10;
//     v=year/5;
//     romanise(v,'v');
//     year%=5;
//     i=year/1;
//     romanise(i,'i');
//     year%=1;
//     printf("\n");
    
//     return 0;
// }

//(C-a) check leap year
// int checkLeapyear(int y){
//     if(y%400==0 || y%100==0 && y%4==0) return 1;
//     return 0;
// }
// int main(){
//     int year;
//     scanf("%d",&year);
//     printf("%d is leap year : %d\n",year,checkLeapyear(year));
//     return 0;
// }

//(C-b) - get prime fa ctors of a +ve number
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        while(n%i==0){
            printf("%d,",i);
            n/=i;
        }
    }
    return 0;
}
