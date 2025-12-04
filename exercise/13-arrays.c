#include <stdio.h>
//chapter 13
//(13.1)interchange elements at odd posiyions with elements at even positions in an array

/*int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int i=0;i<10;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}*/

//(13.2) copy elements from an array to another in reverse order

/*int main(){
    int arr1[]={1,2,3,4,5},arr2[5];
    int j=0;
    for(int i=4;i>=0;i--){
        arr2[j++]=arr1[i];
    }
    for(int i=0;i<5;i++) printf("%d ",arr2[i]);
    return 0;
}*/

//(13.3) search an element in array, return how many times the number occurs

/*int main(){
    int arr[]={1,2,2,3,4,6,7,8,9,0};
    int k;
    printf("enter the element to search: ");
    scanf("%d",&k);
    int res=0, size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]==k) res++;
    }
    printf("occured %d times",res);
    return 0;
}*/
//quesrions - B-a

/*int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int pos=0,neg=0,odds=0,evens=0;
    for(int i=0;i<10;i++){
        if(arr[i]>=0) pos++;
        else neg++;
        if(arr[i]%2==0) evens++;
        else odds++;
    }
    printf("positives : %d negatives : %d\nodds : %d evens : %d\n",pos,neg,odds,evens);
    return 0;
}*/

//B-b
/*int main(){
    int arr[]={1,2,3,4,4,3,2,1};
    int left=0,right=7;
    int flag=1;
    while(left<=right){
        if(arr[left]!=arr[right]) flag=0;
        left++;
        right--;
    }
    printf("is it a mirror arra?\nans: %d",flag);
    return 0;
}*/

//B-c
/*int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr=arr;
    int smallest=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(*ptr < smallest) smallest= (*ptr);
        ptr++;
    }
    printf("smallest element : %d",smallest);
    return 0;
}*/

//B-d insertion sort
/*int main(){
    int arr[]={44,33,55,22,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<size;i++){
        int j=i-1;
        int current=arr[i];
        while(j>=0 && current<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        if(current!=arr[i])  arr[j+1]=current;

    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/

//B-e
/*void mulThree(int *arr,int n){
    for(int i=0;i<n;i++){
        arr[i]*=3;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    mulThree(arr,5);
    for(int i=0;i<5;i++) printf("%d ",arr[i]);
    return 0;
}*/

//B-f
/*#include <math.h>

int main(){
    double arr[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    double mean, deviation,sum=0,sumsq=0;
    for(int i=0;i<size;i++) sum+=arr[i];
    mean=sum/size;
    for(int i=0;i<size;i++) sumsq+=(arr[i]-mean)*(arr[i]-mean);
    //deviation=sqrt(sumsq)/size;
    printf("mean : %.3f\ndeviation : %.3f\n",mean,deviation);
    return 0;
}*/

//B-g 
// #include <math.h>
// int main(){
//     float asides[]={137.4,155.2,149.3,160.0,155.6,149.7};
//     float bsides[]={80.9,92.62,97.93,100.25,68.95,120};
//     float angles[]={0.78,0.89,1.35,9.0,1.25,1.75};
//     double largestArea=-1;
//     for(int i=0;i<6;i++){
//         double area=0.5*asides[i]*bsides[i]*sin(angles[i]);
//         printf("%.3f ",area);
//         if(largestArea<area) largestArea=area;
//     }
//     printf("largest area is %.3f",largestArea);
//     return 0;
// }

//B-h
//value of r. correlation coefficient 
#include <math.h>
int main(){
    float xs[]={1,2,3,3,4,5}, ys[]={6,7,8,8,9,10};
    double xsum=0, ysum=0, xysum=0,xsquare=0,ysquare=0;
    int size=sizeof(xs)/sizeof(xs[0]);
    for(int i=0;i<size;i++){
        xsum+=xs[i];
        ysum+=ys[i];
        xysum+=xs[i]*ys[i];
        xsquare+=xs[i]*xs[i];
        ysquare+=ys[i]*ys[i];
    }
    double r=xysum-xsum*ysum;
    r/=sqrt((size*xsquare - xsum*xsum)*(size*ysquare - ysum*ysum));
    printf("result is : %f\n",r);
    return 0;
}
