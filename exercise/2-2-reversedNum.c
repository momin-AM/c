#include <stdio.h>

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
