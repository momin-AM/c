//chapter 17 : structures 
#include <stdio.h>
//B-c - engine parts info
#include <string.h>

// int hexaToDec(char *nums);

// struct part
// {
//     int sn,mfYear, quantity;
//     char material[100];
// };

// int main(){
//     struct part items[4080];
//     char input[100];
//     printf("enter serial number : ");
//     scanf("%s",input);
//     int num=hexaToDec(input);
//     strcpy(items[num].material,"vibranium");
//     items[num].mfYear=2019;
//     items[num].quantity=100000;
//     items[num].sn=num;
//     printf("serial no : %s  - %d\nmaterial : %s\nmanufacturer year : %d\nquanitity : %d\n",input,num,items[num].material,items[num].mfYear,items[num].quantity);
//     return 0;
// }
// //functions
// int hexaToDec(char *nums){
//         int res=0;
//         int len=strlen(nums);
//         int i=len-1,powMul=0;
//         for(;i>=0;i--){
//             int val=0;
//             if(nums[i]>='a' && nums[i]<='f'){
//                 val=nums[i]-'a'+10;
//             }else if(nums[i]>='0' && nums[i]<='9'){
//                 val=nums[i]-'0';
//             }else{
//                 printf("incompatible format.\n");
//                 return -1;
//             }
//             res+=val*(1<<(4*powMul));
//             powMul++;
//         }
//         return res;
// }


//B-d  - read data of crcicketers, arrange their data with ascneding order with respect totheir average run
// #include <stdlib.h>


// struct cricketer
// {
//     char name[100];
//     int age, matches, runs;
// };

// int compare(const void *a, const void *b){
//     const struct cricketer *x=(const struct cricketer *)a;
//     const struct cricketer *y=(const struct cricketer *)b;
//     return x->runs-y->runs;
// }

// int main(){
//     struct cricketer players[20];
//     char *names[]={"shahid","virat","rathod","kohli","dhomni","shahid","virat","rathod","kohli","dhomni", "shahid","virat","rathod","kohli","dhomni","shahid","virat","rathod","kohli","dhomni"};
//     for(int i=0;i<20;i++){
//         strcpy(players[i].name,names[i]);
//         players[i].age=20+i;
//         players[i].matches=100+i;
//         players[i].runs=1000/(i+1);
//     }
//     printf("arranging players in ascending order with respcet to their run...\n");
//     qsort(players,20,sizeof(players[0]),compare);
//     for(int i=0;i<20;i++){
//         printf("player name : %s - age : %d - played matches : %d - runs : %d\n",players[i].name, players[i].age,players[i].matches, players[i].runs);
//     }
//     return 0;
// }

//B-e employee data, get them who's tenure is greater tyhan equal to 3 years

// struct employee
// {
//     char empCode[100], name[100];
//     int day, month, year;
// };
// int getAge(int , int, int , int ,int ,int);

// int main(){
//     struct employee emps[]={{"abnc1","shahid",25,7,2024},
//                             {"abc2","sajal",12,3,2025},
//                             {"abc3","mandal",29,5,2022},
//                             {"abc4","tring",12,12,1021},
//                             {"abc5","spring",10,10,2024}
//                         };
//     int day,month,year;
//     printf("enter current date - day month year : ");
//     scanf("%d %d %d",&day,&month,&year);
//     printf("employees with more than 3 years of tenure : \n");
//     for(int i=0;i<5;i++){
//         int dayDiff=getAge(emps[i].day, emps[i].month, emps[i].year,day,month,year);
//         if((dayDiff/365)>=3){
//             printf("%s\n",emps[i].name);
//         }
//     }
//     return 0;
// }

// int getAge(int day, int month, int year, int cday,int cmonth,int cyear){
//     int months=(cyear-year)*12;
//     months+=cmonth-month;
//     int days=months*30;
//     days+=cday-day;
//     return days;
// }

//B-f (due)
#include <stdlib.h>
struct library
{
    int accessionNum;
    char name[100],aurhor[100];
    int price, issued;
};

//function prototypes
void addBook(int booksNum,struct library *books);
void display(struct library *books);
void listWithAuthor(int, struct library*);
void showBooksWithAccessNum(int lim,struct library *books);
int bookCount(struct library *books);
void sortBooksWithAccessNum(int,struct library *books);

int main(){
    struct library books[100];
    int curNo=0;
    int i=0;
    // while(books[i].accessionNum!=-1){
    //     curNo++;
    //     i++;
    // }
    int choice;
    printf("1.add book info\n2.display book info \n3.list all books of given authot\n4.get book name with accession number\n5book count\n6.list books in accession order,7.exit\nenetr : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        addBook(curNo,books);
        curNo++;
        printf("book added succesfully\n");
        break;
    case 2:
        display(books);
        break;
    case 3:
        listWithAuthor(curNo,books);
        break;
    case 4:
        showBooksWithAccessNum(curNo,books);
        break;
    case 5:
        int temp=bookCount(books);
        printf("number of books : %d\n",temp);
        break;
    case 6:
        sortBooksWithAccessNum(curNo,books);
        break;
    case 7:
        printf("exiting program...\n");
        return 0;
        break;
    default:
        break;
    }
    main();
    return 0;
}

void addBook(int booksNum,struct library *books){
   (books+booksNum)->accessionNum=booksNum+1;
   printf("enter book name : ");
   scanf("%s",(books+booksNum)->name);
   printf("enter author name : ");
   scanf("%s",(books+booksNum)->aurhor);
   printf("enter price : ");
   scanf("%d",&(books+booksNum)->price);
   (books+booksNum)->issued=0;
}

void display(struct library *books){
    printf("enter accession number : ");
    int num;
    scanf("%d",&num);
    printf("book name : %s\nauthor : %s\nprice : %d , issued : %d\n",(books+num-1)->name,(books+num-1)->aurhor,(books+num-1)->price,(books+num-1)->issued);
}

void listWithAuthor(int lim, struct library *books){
    char str[100];
    printf("enter author name: ");
    scanf("%s",str);
    for(int i=0;i<lim;i++){
        if (strcmp((books+i)->aurhor,str)==0){
            printf("accession number : %d\nbook name : %s\nprice : %d\n",(books+i)->accessionNum,(books+i)->name,(books+i)->price);
        }
    }
}

void showBooksWithAccessNum(int lim,struct library *books){
    int accessNum;
    printf("enter access number: ");
    scanf("%d",&accessNum);
    for(int i=0;i<lim;i++){
        if ((books+i)->accessionNum==accessNum){
            printf("author name : %s\nbook name : %s\nprice : %d\n",(books+i)->aurhor,(books+i)->name,(books+i)->price);
        }
    }
}

int bookCount(struct library *books){
    int i=0;
    while((books+i)->accessionNum!=-1) i++;
    return i;
}

int compare(const void *a, const void *b){
    struct library *x=(struct library*)a;
    struct library  *y=(struct library*)b;
    return x->accessionNum-y->accessionNum;
}

void sortBooksWithAccessNum(int lim,struct library *books){
    qsort(books,lim,sizeof(*books),compare);
}
//B-g - compare dates if they are equal

// struct date
// {
//    int day, month, year;
// };

// int compareDate(struct date *today, int day, int month, int year){
//     if((today->day!=day) || (today->month!=month) || (today->year!=year)) return 0;
//     return 1;
// }

// int main(){
//     struct date today={10,01,2026};
//     int day, month, year;
//     printf("enter day month year : ");
//     scanf("%d %d %d",&day,&month,&year);
//     printf("is it equal to the date in the data? : %d\n",compareDate(&today, day,month, year));
//     return 0;
// }
