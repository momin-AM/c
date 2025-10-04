#include <stdio.h>

//(B-a)multiplication table

// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d*%d=%d\n",n,i,i*n);
//     }
//     return 0;
// }

//(B-b) intelligecne level

// int main(){
//     float res;
//     printf("y       x       i\n");
//     for(int i=1;i<6;i++){
//         for(float j=5.5;j<=12.5;j+=0.5){
//             res=2+(i+0.5*j);
//             printf("%d   :   %.2f   :   %.2f\n",i,j,res);
//         }
//     }
//     return 0;
// }

//(B-c) read 10 sets f p,r,n,q and get compound interest
// #include <math.h>
// int main(){
//     float p,r,n,q;
//     for(int i=0;i<10;i++){
//         printf("enter p r n q");
//         scanf("%f %f %f %f",&p,&r,&n,&q);
//         float temp=p*(1+r/q);
//         float a=pow(temp,n*q);
//         printf("compound : %.2f inr\n",a);

//     }
// }

//(B-d) natural logarithm series 
// #include <math.h>
// int main(){
//     float x;
//     scanf("%f",&x);
//     float number=(x-1)/x;
//     float sum=number;
//     for(int i=2;i<=7;i++){
//         sum+=(1.0/i)*pow(number,i);
//     }
//     printf("sum of first 7 terms is : %f\n",sum);
//     return 0;

// }

//(B-e) pythagorean triplets till 30

// int main(){
//     printf("all the pythagorean triplets till 30 : \n");
//     for(int i=1;i<=30;i++){
//         for(int j=i;j<=30;j++){
//             for(int k=1;k<i+j;k++){
//                 if(i*i+j*j==k*k){
//                     printf("%d^2+%d^2 = %d\n",i,j,k);
//                 }
//             }
//         }
//     }
    
//     return 0;
// }

//(B-f) population increases 10% each year on 1 lakh, for 10 years. show every year data-

// int main(){
//     int popul=100000,gr=10;
//     for(int i=1;i<=10;i++){
//         popul+=popul/10;
//         printf("year : %d - polulation : %d\n",i,popul);
//     }
//     return 0;
// }

//(B-g)print numbers like ramanujan number(1729) (cube of two pairs)
// int main(){
//     int freq[2000005],x=0;
//     for(int i=1;i<100;i++){
//         for(int j=i+1;j<100;j++){
//             if(i!=j){

//                 int sum=i*i*i+j*j*j;
//                 freq[(sum)]++;
//             }
//         }
//     }
//     for(int i=0;i<2000005;i++){
//         if(freq[i]>=2){
//             printf("%d\n",i);
//             x++;
//         }
//     }
//     printf("%d total",x);
//     return 0;
// } fucked up



//(B-h) print 24 hours of a day with suitable suffixes

// int main(){
//     for(int i=0;i<24;i++){
//         if(i<12){
//             printf("%d am",i);
//             if(i<6) printf(" night\n");
//             else printf(" morning\n");
//         }
//         else{
//             printf("%d pm",i);
//             if(i<18) printf(" noon\n");
//             else printf(" night\n");
//         }
//     }
//     return 0;
// }

//(B-i) 
// int main(){
//     int x=1;
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4-i;j++){
//             printf("    ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("%d      ",x++);
//         }
//         printf("\n");
//     }
//     return 0;
// }


