//get gray code from binary and binary to gray code
    //gray to bin yet to impelemnt
#include <stdio.h>

long long binToDec(char arr[],int n){
    long long res=0;
    for(int i=0;i<n;i++){
        res=res<<1 | (arr[i]-'0');
    }
    return res;
}
void decToBin(int num, char arr[]){
    int i=0;
    while(num){
        arr[i++]=num%2 + '0';
        num/=2;
    }
    int start=0, end=i-1;
    while(start<end){
        int temp=arr[start];
        arr[start++]=arr[end];
        arr[end--]=temp;
    }
    arr[i]='\0';
}
long long binToGray(long long num){
    return (num<<1) ^ num;
}
// long long grayToBin(long long num){

// }

int main(){
    char arr[65];
    printf("enter binay number : ");
    scanf("%64s", arr);
    int x;
    printf("1. to binary 2. to grey code : ");
    scanf("%d",&x);
    int n=0;
    while(arr[n]!=0) n++;
    if(x==1){
        long long temp=binToDec(arr,n);
        temp=binToGray(temp);
        decToBin(temp,arr);
        int i=0;
        while (arr[i]!='\0') printf("%c",arr[i++]);
    }else if(x==2){

    }
    
    return 0;
}
