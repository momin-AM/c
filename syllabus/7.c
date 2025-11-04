//get the biggest num among 3 innputs
#include <stdio.h>

int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    int biggest=arr[0];
    for(int i=1;i<3;i++){
        if(arr[i]>biggest) biggest=arr[i];
    }
    printf("biggest number is : %d\n",biggest);
    return 0;
}
