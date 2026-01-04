// chapter 16 : handling multiple strings
#include <stdio.h>
#include <string.h>

// problem 16.1 - store few strings in an array of pointers to strinngs, search if a inputted string is present-
//  int main() {
//      char *arr[]={"momin","rakesh","seminar","tadaa"};
//      char target[50];
//      int present=0;
//      scanf("%s",target);
//      for(int i=0;i<4;i++){
//          if(strcmp(arr[i],target)==0) present=1;
//      }
//      printf("present : %d\n",present);
//      return 0;
//  }

// problem 16.2 -- lexicographically sort strings-
//  int main(){
//      char *arr[]={"apple","thai","banana","salad","tadaa"};
//      char *temp;
//      for(int i=4;i>=0;i--){
//          int unsorted=0;
//          for(int j=0;j<i;j++){
//              if(strcmp(arr[j],arr[j+1])>0){
//                  unsorted=1;
//                  temp=arr[j];
//                  arr[j]=arr[j+1];
//                  arr[j+1]=temp;
//              }
//          }
//          if(!(unsorted)) break;;
//      }
//      for(int i=0;i<5;i++) printf("%s ",arr[i]);
//      printf("\n");
//      return 0;
//  }

// problems 16.3- reverse every string in an array of poinnters to strings

// void reverseS(char *s){
//     int right=strlen(s)-1;
//     int left=0;
//     char t;
//     while(left<right){
//         t=s[left];
//         s[left]=s[right];
//         s[right]=t;
//         left++; right--;
//     }
// }

// int main(){
//     char arr[][10]={"apple","thai","banana","salad","tadaa"};
//     for(int i=0;i<5;i++){
//         reverseS(arr[i]);
//         printf("%s ",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// A-b - delete all vowels from a sentence

// int main(){
//     char str[80];
//     printf("enter a line :");
//     scanf("%[^\n]s",str);
//     int len=strlen(str)-1;
//     int i=0;
//     for(;i<=len;i++){
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i'||str[i]=='o'|| str[i]=='u'){
//             for(int j=i;j<len;j++){
//                 str[j]=str[j+1];
//             }
//             len--;
//         }
//     }
//     for(int i=0;i<=len;i++) printf("%c",str[i]);
//     printf("\n");
//     return 0;
// }

// A-c - delete all occurences of "the"

// int main(){
//     char str[]={"hello the man the"};
//     int len=strlen(str)-1;
//     do{
//         char *p=strstr(str,"the\0");
//         int i;
//         if(p!=NULL){
//             i=p-str;
//             i+=3;
//             for(;i<=len;i++){
//                 str[i-3]=str[i];
//             }
//             len-=3;
//             str[len+1]='\0';
//         }

//     }while(strstr(str,"the")!=NULL);
//     int i=0;
//     while(str[i]!='\0'){
//         printf("%c",str[i]);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }

// A-d - have stored names, shorten them with keeping surname but first and middle name shortened(due)

void shortenName(char *s)
{
    int len = strlen(s) - 1;
    char name[20]={""};
    strcat(name,s[0]+"\0");
    char surname[10]={""};
    for (int i = len; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            strcpy(surname,s+i+1);
            break;
        }
    }
    for (int i = 0; i<= len; i++)
    {
        if (s[i] == ' '){
            strcat(name, " ");
            strcat(name, s+i + 1);
        }
    }
    strcat(name," ");
    strcat(name,surname);
    strcpy(s,name);
}

int main()
{
    char *names[] = {"rajesh khanna", "Mohammad Abdul Rahman Khan", "Amit Kumar Singh"};
    for (int i = 0; i < 3; i++)
    {
        shortenName(names[i]);
        printf("%s ",names[i]);
    }
    return 0;
}

//count the occurences of any two vowels in succession in a line of text

// int main(){
//     char line[100]="please read this application and give me gratuity";
//     int res=0;
//     int len=strlen(line);
//     for(int i=0;i<len-1;i++){
//         if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'){
//             if(line[i+1]=='a'||line[i+1]=='e'||line[i+1]=='i'||line[i+1]=='o'||line[i+1]=='u') res++;
//         }
//     }
//     printf("%d\n",res);
//     return 0;
// }

//convert any number to string form(12345 = twelve thousand three hundred forty five)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char* numToStr(long long num) {
    static char res[300];
    res[0] = '\0';

    char *ones[] = {
        "", "one","two","three","four","five",
        "six","seven","eight","nine","ten",
        "eleven","twelve","thirteen","fourteen","fifteen",
        "sixteen","seventeen","eighteen","nineteen"
    };

    char *tens[] = {
        "", "", "twenty","thirty","forty",
        "fifty","sixty","seventy","eighty","ninety"
    };

    if (num == 0) {
        strcpy(res, "zero");
        return res;
    }
    if (num >= 20000000000) {
        strcat(res, tens[num / 10000000000]);
        strcat(res, " \0");
        num %= 20000000000;
        if(num<1000000000) strcat(res, "Billion ");
    }

    if (num >= 1000000000) {
        strcat(res, ones[num / 1000000000]);
        strcat(res, " Billion ");
        num %= 1000000000;
    }
    if (num >= 200000000) {
        strcat(res, tens[num / 100000000]);
        strcat(res, " \0");
        num %= 200000000;
        if(num<10000000) strcat(res, "crore ");
    }

    if (num >= 10000000) {
        strcat(res, ones[num / 10000000]);
        strcat(res, " crore ");
        num %= 10000000;
    }
    if (num >= 2000000) {
        strcat(res, tens[num / 1000000]);
        strcat(res, " \0");
        num %= 2000000;
        if(num<100000) strcat(res, "lakh ");
    }

    if (num >= 100000) {
        strcat(res, ones[num / 100000]);
        strcat(res, " lakh ");
        num %= 100000;
    }
    if (num >= 20000) {
        strcat(res, tens[num / 10000]);
        strcat(res, " \0");
        num %= 20000;
        if(num<1000) strcat(res, "thousand ");
    }

    if (num >= 1000) {
        strcat(res, ones[num / 1000]);
        strcat(res, " thousand ");
        num %= 1000;
    }

    if (num >= 100) {
        strcat(res, ones[num / 100]);
        strcat(res, " hundred ");
        num %= 100;
    }

    if (num >= 20) {
        strcat(res, tens[num / 10]);
        strcat(res, " ");
        num %= 10;
    }

    if (num > 0) {
        strcat(res, ones[num]);
    }

    return res;
}

int main() {
    long long int num;
    while (1)
    {
        printf("enter number: ");
        scanf("%lld",&num);
        if(num==-1) break;
        else{
            char *text = numToStr(num);
            for (int i = 0; text[i]; i++) {
                putchar(text[i]);
                fflush(stdout);
                usleep(50000); // 50 ms
            }
            printf("\n");
        }
    }
    return 0;
}
