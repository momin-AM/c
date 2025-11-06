//check if a  number is palindrome, also return the sum of it's digits
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    int temp=n,temp2=n, digitSum=0;
    while(temp){
        digitSum+=temp%10;
        temp/=10;
    }
    printf("sum of %d's digits is %d\n",n,digitSum);
    int rev=0;
    while (temp2)
    {
        rev=rev*10+ temp2%10;
        temp2/=10;
    }
    printf("%d is palindrome? = %d\n",n,n==rev);
    return 0;
}
