#include <stdio.h>
#include <string.h>
int my_strcmp(char arr1[], char arr2[]){
    int s=0;
    while(arr1[s]!='\0' && arr2[s]!='\0') s++;
    for(int i=0;i<s;i++){
        if(arr1[i]!=arr2[i]){
            return arr1[i]-arr2[i];
        }
    }
    return 0;
}
void lexicofy(char arr[][50],int size){//using bubble sorting logic
    for(int i=size-1;i>=0;i--){
        int swapped=0;
        for(int j=0;j<i;j++){
            int strDiff=my_strcmp(arr[j],arr[j+1]);
            if(strDiff>0){
                char arrt[50];
                strcpy(arrt,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],arrt);
                swapped=1;
            }
        }
        if(!(swapped)) break;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    char arr[n][50];
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    lexicofy(arr,n);
    printf("results : \n\n");
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
    printf("\n\n\n");
    return 0;
}
