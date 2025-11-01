//convert a decimal to binary, octal, hexadecimal
#include <stdio.h>

void toBin(int n, char arr[], int base){
    int res=0, i=0;
    if (n == 0){
        printf("0");
        return;
    }
    while(n){
        arr[i] = (char)((n % base)+'0');
        n /= base;
        i++;
    }
    int start=0, end=i;
    while(start<end){
        char temp=arr[start];
        arr[start++]=arr[end];
        arr[end--]=temp;
    }
}

int main(){
    char arr[64];
    int n,base;
    printf("enter number - base to transform to: ");
    scanf("%d %d",&n,&base);
    // printf("1.binary 2.octal 3.hexadecimal : ");
    toBin(n,arr,base);
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++) printf("%c",arr[i]);
    printf("\n");
    return 0;

}
