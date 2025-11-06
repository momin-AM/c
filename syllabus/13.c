//take int inputs untill user enters 999, also show the sum of positive numbers entered by user
#include <stdio.h>

int main(){
    int n;
    printf("enter your percentage : ");
    scanf("%d",&n);
    if(n>=90 && n<100){
        printf("execellent\n");
    }else if(n<90 && n>=80){
        printf("very good\n");
    }else if(n<80 && n>=65){
        printf("good\n");
    }else if(n<65 && n>=40){
        printf("you need to work on urself\n");
    }else if(n==100){
        printf("hello einstein's nephew\n");
    }
    else{
        printf("you're faked\n");
    }
    
    return 0;
}
