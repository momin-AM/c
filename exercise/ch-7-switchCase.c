//chapter -7 : case control instructions(let us c)
#include <stdio.h>

//(problem 7.1)
// #include <math.h>
// int checkprime(int n){
//     if(n==1) return 0;
//     if(n==2) return 1;
//     for(int i=3;i<sqrt(n);i++){
//         if(n%i==0) return 0;
//     }
//     return 1;
// }
// int main(){
//     while(1){
//         printf("1.Factorial\n2.prime or not\n3.odd or even\n4.exit\n");
//         int userInp;
//         scanf("%d",&userInp);
//         if(userInp==4) break;
//         printf("enter number :");
//         int num;
//         scanf("%d",&num);
//         int res;
//         switch ((userInp))
//         {
//         case 1:
//             res=1;
//             if(num==0) res=1;
//             if(num<0) printf("can't get fact of -ve\n");
//             for(int i=1;i<=num;i++){
//                 res=res*i;
//             }
//             printf("factorial of %d is %d\n",num,res);
//             break;
//         case 2:
//             printf("is prime : %d\n",checkprime(num));
//             break;
//         case 3:
//             if(num%2==0) printf("even\n");
//             else printf("odd\n");
//         default:
//             break;
//         }
//     }
//     return 0;
// }

// problem -c : grace marks for students

int main(){
    int class,failed,grace,subjects=7;
    printf("enter class and failed in how many subjects : ");
    scanf("%d %d",&class,&failed);
    switch (class)
    {
    case 1:
        if(failed>3) grace=0;
        else grace=5*subjects;
        break;
    case 2:
        if(failed>2) grace=0;
        else grace=4*subjects;
        break;
    case 3:
        if(failed>1) grace=0;
        else grace=5;
    default:
        break;
    }
    printf("grace : %d\n",grace);
    return 0;
}
