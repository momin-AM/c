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
