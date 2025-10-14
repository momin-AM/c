//chapter 9 : pointers(let us c by yashvant kanetkar)
#include <stdio.h>

//problem 9.1 - recieve 5 integers, get sum, average, standard daviation by calling one function
// #include <math.h>

// void stats(int *,float *,float *);

// int main(){
//     int sum;
//     float average,deviation;
//     stats(&sum,&average,&deviation);
//     printf("sum : %d\naverage : %f\nstandard daviation : %f\n",sum,average,deviation);
//     return 0;
// }

// void stats(int *sum,float *average,float *dev){
//     int n[5];
//     scanf("%d %d %d %d %d",&n[0],&n[1],&n[2],&n[3],&n[4]);
//     *sum=n[0]+n[1]+n[2]+n[3]+n[4];
//     *average=*sum/5;
//     *dev=0;
//     for(int i=0;i<5;i++){
//         *dev+=pow(n[i]-(int)*average,2);
//     }
//     *dev/=4;
//     *dev=sqrt(*dev);
//     return ;
// }

//prolem 9.2 - create a function that returns power and factorial of input number

// void powFact(int n,int *pow,int *fact){
//     int tempPower=n,factTemp=n,resP=1;
//     while(tempPower>0){
//         if(tempPower%2==1){
//             resP*=n;
//         }
//         n*=n;
//         tempPower/=2;
//     }
//     *pow=resP;
//     *fact=1;
//     for(int i=1;i<=factTemp;i++){
//         *fact*=i;
//     }
//     return;
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     int pow,fact;
//     powFact(n,&pow,&fact);
//     printf("factorial : %d\npower : %d\n",fact,pow);
//     return 0;
// }

//problem 9.3 - print memory locations and values of 3 vars, with pointers of course(*, **)

// int main(){
//     float x=3.14,*y,**z;
//     y=&x;
//     z=&y;
//     printf("addresses :\nx : %p\ny : %p\n z : %p\n",&x,&y,&z);
//     printf("values(of pointers) :\ny : %p\n z : %p\n",y,z);
//     printf("value(of x) :\nx : %f\ny : %f\nz : %f\n",*(&x),*y,**z);
//     return 0;

// }

//(c-a) given 3 integer vars shift their value to right 

// void shiftVal(int *a,int *b, int *c){
//     int temp=*c;
//     *c=*b;
//     *b=*a;
//     *a=temp;
//     return ;
// }

// int main(){
//     int x,y,z;
//     scanf("%d %d %d",&x,&y,&z);
//     printf("x : %d , y ; %d , z : %d\n",x,y,z);
//     shiftVal(&x,&y,&z);
//     printf("x : %d , y ; %d , z : %d\n",x,y,z);
//     return 0;
// }

//(c-b) takes kg, returns grams, tons, pounds

// void getVals(float kg,float *grams,float *tons,float *pounds){
//     *grams=1000*kg;
//     *tons=kg/1000;
//     *pounds = kg * 2.20462;

//     return ;
// }

// int main(){
//     float kg,grams,tons,pounds;
//     scanf("%f",&kg);
//     getVals(kg,&grams,&tons,&pounds);
//     printf("grams : %.3f\ntons : %.3f\npounds : %.3f\n",grams,tons,pounds);
//     return 0;
// }

//(c-c) 
