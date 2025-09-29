//chapter 5 - Loop control instruction - "let us c" by yashvant kanetkar
#include <stdio.h>

//-----------------(B-a)printing all ascii numbers------------------//

// int main(){
//     for(int i=0;i<=255;i++){
//         printf("%d : %c\n",i,(char)i);
//     }
//     return 0;
// }

//-----------------(B-b) printing all ARMSTRONG nbumbers between 100-500------------------//

// int main(){
//     for(int i=100;i<=500;i++){
//         int sum=0;
//         int tmp=i;
//         while(tmp>0){
//             sum+=(tmp%10)*(tmp%10)*(tmp%10);
//             tmp/=10;

//         }
//         if(sum==i){
//             printf("%d \n",sum);
//         }

//     }
//     return 0;
// }


//-----------------(B-c) <Matchsticks Game>------------------//

#include <stdio.h>

int main(){
  int sticks=21,com,user;
  int won0com1user;
  while(sticks>=1){
    if(sticks==1) break;
    won0com1user=1;
    
    printf("\nyou : ");
    scanf("%d",&user);
    if(user>4){
      printf("wrong input, you lost");
      break;}
    sticks -=user;
    
    if(sticks==1) break;
    won0com1user=0;
    com=5-user;
    sticks-=com;
    printf("\ncomputer : %d",com);
    printf("\nreamining %d sticks ",sticks);
 }   
  if(won0com1user==1) printf("\nyou won\n");
  if(won0com1user==0) printf("\ncomputer won\n");
  return 0;
}

//-----------------(B-d) <Count positive,negative and 0's>------------------//
// int main(){
//     int pos,neg,zeros,number;
//     pos=neg=zeros=0;
//     while(scanf("%d", &number)==1){
//         if(number>0) pos++;
//         else if(number<0) neg++;
//         else zeros++;
//     }
//     printf("positives : %d\nNegatives : %d\nZeroes : %d",pos,neg,zeros);
//     return 0;
// }
//-----------------(B-e) <convert to OCTAL>------------------//
// #include <math.h>
// int main(){
//     int n,octal=0;
//     scanf("%d",&n);
//     int i=0;
//     while (n>0)
//     {
//         octal+=n%8*pow(10,i);
//         n/=8;
//         i++;
//     }
//     printf("%d",octal);
//     return 0;
// }


//-----------------(B-f) <getting Range>------------------//

// int main(){
//     int number,biggest=0,smallest;
//     int i=0;
//     while(scanf("%d",&number)==1){
//         if(i==0) smallest=number;
//         if(number>biggest) biggest=number;
//         if(number<smallest) smallest=number;
//         i++;
//     }
//     printf("\n%d  -  %d\ntotal %d numbers",smallest,biggest,i);
//     return 0;
// }


