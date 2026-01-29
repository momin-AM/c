//chapter 12 : preprocessor
#include <stdio.h>
//12.1
/*#define lowercase(c) (c>='a' && c<='z')
#define uppercase(c) (c>='A' && c<='Z')
#define alpha(c) (lowercase(c) || uppercase(c))
#define bigger(a,b) (a>b?a:b)
int main(){
    printf("a is lowercase : %d\nA is lowercase : %d\n5 is alphabet? : %d\n\
           2 or 4 who's bigger? %d\n",lowercase('a'),lowercase('A'),alpha(5),bigger(2,4));
    return 0;
}*/

//12.2
/*#define PI 3.1415
#define AREAC(r) (PI*r*r)
#define PERIC(r) (2*PI*r)
#define AREAT(b,h) (0.5*b*h)
#define PERIT(a,b,c) (a+b+c)
#define AREAS(a) (a*a)
#define PERIS(a) (4*a)*/
/*#include "tests/areaperi.h"
int main(){
    int r=5,a=3,at=3,bt=4,ct=5;
    printf("circle :\narea : %.3f\tperimeter : %.3f\n",AREAC(r),PERIC(r));
    printf("triangle :\narea : %.3f\tperimeter : %.3f\n",AREAT(bt,at),PERIT(at,bt,ct));
    printf("square :\narea : %.3f\tperimeter : %.3f\n",AREAS(a),PERIS(a));
    return 0;
}*/

//C-b
/*#define ARITHMEAN(a,b) (((a)+(b))/2)
#define ABSOLUTE(n) (n>=0?n:((-1)*n))
#define UPPERTOLOWER(c) ((c)+32)
#define BIGGEST(a,b,c) (a>b && a>c?a: b>a && b> c? b : c)

int main(){
    int a=-5,b=3;
    printf("mean is : %d\nabsolute : %d\nupper to lower of D : %c\nbiggest : %d",ARITHMEAN(a,b),ABSOLUTE(a),UPPERTOLOWER('D'),BIGGEST(a,b,7));
    return 0;
}*/

//#define INTEREST(p,r,t) (((p)*(r)*(t))/100)
//#define AMOUNT(i,r,t) ((100*(i))/(r)*(t))
#include "tests/interest.h"
int main(){
    int p=100,t=1,i=10;
    float r=10;
    printf("interest is : %f\namount is : %f\n",INTEREST(p,r,t),AMOUNT(i,r,t));
    return 0;
}

