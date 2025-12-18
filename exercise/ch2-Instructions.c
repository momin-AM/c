//chapter 2 - instructions - "let us c" by yashvant kanetkar
#include <stdio.h>
#include <math.h>

//------------MINIMUM NUMBERS OF NOTES FOR A NUMBER OF INR------------------------
int main(){
    int amount,hundreds,fifties,tens,fives,twos,ones;
    printf("enter amount :");
    scanf("%d",&amount);
    hundreds=amount/100;
    amount%=100;
    fifties=amount/50;
    amount%=50;
    tens=amount/10;
    amount%=10;
    fives=amount/5;
    amount%=5;
    twos=amount/2;
    amount%=2;
    ones=amount/1;
    amount%=1;
    printf("total number of notes : %d",hundreds+fifties+tens+fives+twos+ones);
}

// -------------(G-a)SUM OF 5 DIGITS--------------
// int main(){
//     int n;
//     printf("enter a 5  digit number : ");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=0;i<5;i++){
//         sum+=n%10;
//         n/=10;
//     }
//     printf("the sum of 5 digits is : %d",sum);
//     return 0;

// }


// -------------(G-b)CARTESIAN TO POLAR--------------
// int  main(){
//     int x,y;
//     double r,theta;
//     printf("enter cartesian form(x,y) : ");
//     scanf("%d %d",&x,&y);
//     r=sqrt(x*x+y*y);
//     theta=atan(y/x);
//     printf("modulus : %f\nargument : %f",r,theta);
//     return 0;

// }

// -------------(G-c)DISTANCE BETWEEN TWO POINTS-------------

// int main(){
//     int x1,y1,x2,y2,dis;
//     printf("enter 2 co ordinates (x1 y1 x2 y2) : ");
//     scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
//     dis=3963*acos(sin(x1)*sin(x2)+cos(y1)*cos(y2)*cos(y2-y1));
//     printf("distance between them ibn miles is : %d",dis);
//     return 0;
// }

// -------------(G-d)WIND CHILL FACTOR CALCULATIONS -------------

// int main(){
//     float tem,vel;
//     float wcf;
//     printf("enter temperature and velocity : ");
//     scanf("%f %f",&tem,&vel);
//     wcf=35.74+0.6215*tem+(0.4275*tem-35.75)*pow(vel,0.16);
//     printf(" the wind chill factor is : %.3f",wcf);
//     return 0;

// }

// -------------(G-e)TRIGONOMETRIC VALUES-------------

// int main(){
//     float n;
//     printf("enter degree in radian(pi*x, input x) : ");
//     scanf("%f",&n);
//     n*=3.14;
//     printf("sin : %f\ncos : %f\ntan : %f",sin(n),cos(n),tan(n));
//     return 0;


// }


// -------------(G-e)INTERCHANGE CONSTANTS OF C AND D-----------------

int main(){
    int c,d;
    printf("enter two numbers : ");
    scanf("%d %d",&c,&d);
    int temp;
    temp=d;
    d=c;
    c=temp;
    printf("c : %d\nd : %d",c,d);
    return 0;

}

//TRIANGLE AREA CALCULATE

#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,s,area=0;
        printf("enter length of 3 sides of triangle : ");
        scanf("%f %f %f", &a, &b, &c);
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("area is : %.3f\n", area);
        return 0;
}

//REVERSE A NUMBER

int main(){
    int userInput,arr[10],digits=1,result=0;
    printf("enter number : ");
    scanf("%d",&userInput);
    int temp=userInput;
    while((userInput/10)!=0){
        userInput/=10;
        digits+=1;
    }
    userInput=temp;
    printf("reversed number : ");
    for(int i=0;i<digits;i++){
        arr[i]=userInput%10;
        userInput/=10;
        printf("%d",arr[i]);
    }
    return 0;
}


