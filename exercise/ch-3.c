//chapter 3 - if-else - "let us c" by yashvant kanetkar
#include <stdio.h>
// #include <math.h>

//-----------------(F-a)if REVERSED number is EQUAL or not-------------------//

// int main(){
//     int n,reversed=0;
//     scanf("%d",&n);
//     int temp=n;
//     while(n>0){
//         reversed=reversed*10+n%10;
//         n/=10;
//     }
//     n=temp;
//     if(reversed==n){
//         printf("Reversed number %d is equal to %d",reversed,n);
//     }else printf("Reversed number %d is not equal  to %d",reversed,n);

//     return 0;

// }

//-----------------(F-b)Youngest Of Three-------------------//

// int main(){
//     int ages[3],youngest;
    
//     // scanf("%d %d %d",&ages[0],&ages[1],&ages[2]);
//     int j=-1;
//     printf("enter any char to get result\n");
    
//     do
//     {
//         printf("enter age : ");
//         j++;
//     }while (scanf("%d",&ages[j])!=0);
    
//     youngest=ages[0];
//     int index;
//     for(int i=0;i<=2;i++){
//         if(youngest>=ages[i]){
//             youngest=ages[i];
//             index=i;
//         }
//     }
//     switch (index)
//     {
//     case 0:
//         printf("youngest is Ram: %d",ages[0]);
//         break;
//     case 1:
//         printf("youngest is Shyam : %d",ages[1]);
//         break;
//     default:
//         printf("youngest is Ajay : %d",ages[2]);
//         break;
//     }
//     return 0;

// }


//-----------------(F-c)check Valid triangle with angles-------------------//

// int main(){
//     int a,b,c;
//     printf("enter 3 angles : ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a+b+c==180){
//         printf("It's a Triangle");
//     }else if ( printf("It's not a trianglke"));
//     return 0;
// }


//-----------------(F-d)absolute value of a number ------------------//

// int main(){
//     float n;
//     scanf("%f",&n);
//     if(n<0) n+=(-n)*2;
//     printf("Absolute value is : %d",(int)n);

//     return 0;

// }

//-----------------(F-e)Reactangle's area>perimeter?1:0; ------------------//

// int main(){
//     int a,b,param,area;
//     scanf("%d %d",&a,&b);
//     area=a*b;
//     param=2*(a+b);
//     area>param?printf("area is graeter than perimeter."):printf("perimeter is graeter than area.");
//     return 0;
// }


//-----------------(F-f)3 points fall one the SAME LINE? ------------------//

// int main(){
//     float a1,b1,a2,b2,a3,b3;
//     float slope1,slope2;
//     scanf("%f %f %f %f %f %f",&a1,&b1,&a2,&b2,&a3,&b3);
//     slope1=(a1-a2)/(b1-b2);
//     slope2=(a2-a3)/(b2-b3);
//     if(slope1==slope2){
//         printf("yes they fall on same line.");
//     }else printf("No they don't fall on same line.");
//     return 0;

// }

//-----------------(F-g)3 points lies inside/on/outside of a circle------------------//

// int main(){
//     int a,b,rad,c1,c2;
//     scanf("%d %d",&a,&b);
//     c1=c2=0;
//     rad=4;
//     if(a<0) a+=2*(-a);
//     if(b<0) b+=2*(-b);

//     //range will be (0,0)-(4,4)
//     if(a<rad && b<rad) printf("point inside circle");
//     else if((a==0 && b==rad) || (a==rad && b==0)) printf("Point on circle");
//     else printf("Point is outside of circle");
//     return 0;

// }


//-----------------(F-h)3 points lies on X axis or Y axis or origin?------------------//

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     if(b==0 && a==0) printf("Point on ORIGIN");
//     else if(b==0) printf("Point on X axis");
//     else printf("Point on Y axis");
//     return 0;
// }

//-----------------(F-i)3 points lies on X axis or Y axis or origin?------------------//

int main(){
    int day,mon,year;
    printf("enter day month year : ");
    scanf("%d %d %d",&day,&mon,&year);
    day+=mon*30;
    day+=365*year;
    int res=day%7;
    switch (res)
    {
    case 1:
        printf("Mon");
        break;
    case 2:
        printf("Tues");
        break;
    
    case 3:
        printf("wed");
        break;
    
    case 4:
        printf("Thur");
        break;
    
    case 5:
        printf("sat");
        break;
    
    case 6:
        printf("sun");
        break;
    default:
        break;
    }

}
