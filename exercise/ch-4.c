//chapter 4 - More complex decision making - "let us c" by yashvant kanetkar
#include <stdio.h>

//------------------(D-a) Triangle type-------------------//

// int main(){
//     float a,b,c,biggest;
//     printf("enter 3 sides length of a triangle : ");
//     scanf("%f %f %f",&a,&b,&c);
//     if(a>b && a>c){
//         biggest=a;
//     }else if(b>a && b>c){
//         biggest=b;
//     }else biggest=c;

//     if(a==b && b==c){
//         printf("it's an EQUILATERAL triangle");
//     }
//     else if (a==b || b==c)
//     {
//         if((biggest*biggest==(a*a+b*b)) || (biggest*biggest==fmax(c*c+b*b)) || (biggest*biggest==(a*a+c*c))){
//             printf("it's an ISOSCELES and right-angled triangle ");
//         }else printf("it's an ISOSCELES triangle");
//     }else{
//         if(biggest*biggest==(a*a+b*b) || biggest*biggest==(c*c+b*b) || biggest*biggest==(a*a+c*c)){
//             printf("it's an scalence and right-angled triangle ");
//         }else printf("it's an scalence triangle");
//     }
//     return 0;
    
// }


//------------------(D-b) RGB to CMYK-------------------//
// #include <math.h>
// int main(){
//     float red,green,blue,cyan,mangeta,yellow,black;
//     printf("enter RGB value : ");
//     scanf("%f %f %f",&red,&green,&blue);
//     float white;
//     white=fmax(fmax(red/255,green/255),blue/255);
//     cyan=(white-red/255)/white;
//     mangeta=(white-green/255)/white;
//     yellow=(white-blue/255)/white;
//     black=1-white;
//     printf("c : %.3f , m : %.3f , y : %.3f , k : %.3f",cyan,mangeta,yellow,black);

//     return 0;
// }

//------------------(D-c) grading of STEEL------------------//
// #include <stdbool.h>

// int main(){
//     float hard,carbon,tensileSTR,grade;
//     bool a,b,c;
//     printf("enter hardness-carbonContent-Tensile strength: ");
//     scanf("%F %f %f",&hard,&carbon,&tensileSTR);
//     a=hard>50;
//     b=carbon<0.7;
//     c=tensileSTR>5600;
//     if((a && b) && (b && c)) grade=10;
//     else if(a && b) grade=9;
//     else if(c && b) grade=8;
//     else if(a && c) grade=7;
//     else if(a || b || c) grade=6;
//     else grade=5;
//     printf("this steel's grade is %f",grade);
//     return 0;

// }

//------------------(D-d) BMI calculator------------------//

// int main(){
//     float weight,height,bmi;
//     printf("enter your weight and height(m) : ");
//     scanf("%f %f",&weight,&height);
//     bmi=weight/(height*height);
//     if (bmi<=15) printf("Starvation");
//     else if(bmi>15 && bmi<=17.5) printf("Anorexic");
//     else if(bmi>17.5 && bmi<=18.5) printf("Underweight");
//     else if(bmi>18.5 && bmi<=24.9) printf("Ideal");
//     else if(bmi>24.9 && bmi<=25.9) printf("Overweight");
//     else if(bmi>25.9 && bmi<=30) printf("Fat");
//     else if(bmi>30 && bmi<=30.9) printf("Obese");
//     else if(bmi>30.9 && bmi<40) printf("Mordibly Obese");
//     else printf("KABOOM");
//     return 0;

// }

//------------------(E-a-1,2) check lowercase or special------------------//

// int main(){
//     char a;
//     printf("enter an alphabate: ");
//     scanf("%c",&a);
//     if(a>96 && a<123) printf("it's an lowercase character.");
//     else if((a>31 && a<48) || (a>57 && a<65) || (a>90 && a<97) || (a>122 && a<128)) printf("it's an special character.");
    
//     return 0;
// }

//------------------(E-b) check leap year------------------//

// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n%400==0 || n%100!=0 && n%4==0) printf("it's a leap year");
//     else printf("it's not a leap year.");
//     return 0;
// }

//------------------(E-c) greatest number aming 3------------------//
// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b && a>c) printf("%d is greatest of all",a);
//     else if(b>a && b>c) printf("%d is greatest of all",b);
//     else printf("%d is greatest of all",c);
//     return 0;
// }

//------------------(E-d) check if sin^2+cos^==1------------------//
// #include <math.h>
// int main(){
    //     int n;
    //     printf("enter degree : ");
    //     scanf("%d",&n);
    //     if((sin(n)*sin(n)+(cos(n)*cos(n))==1)) printf("yes the sum is 1");
    //     else printf("the sum ain't 1");
    // }//though it will always be 1 as sin^2x + cos^x =1
    
//------------------(E-e) rewriting the book's exercise code with conditional operators------------------//

int main(){
    int salary;
    scanf("%d",&salary);
    salary>=25000 && salary<=40000? printf("manager") : salary>=15000 && salary<25000? printf("accountant"):printf("clerk");
    return 0;
}


