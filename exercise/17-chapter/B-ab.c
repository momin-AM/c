#include <stdio.h>
//chapter 17 : structures
#include <string.h>
//B-a
/*
struct student{
        int roll;
        char name[100],department[100],course[100];
        int joiningYear;
	};

void joinYear(struct student s[],int num){
    for(int i=0;i<num;i++){
        if(s[i].joiningYear==2016){
            printf("%s\n",s[i].name);
        }
    }
}
void getInfo(struct student s[],int num){
    printf("enter roll number: ");
    int rollN;
    scanf("%d",&rollN);
    for(int i=0;i<num;i++){
        if(s[i].roll==rollN){
            printf("name : %s\nroll : %d\ndepartment : %s\ncourse : %s\njoining year : %d",s[i].name,s[i].roll,s[i].department,s[i].course,s[i].joiningYear);
            return;
        }
    }
}

int main(){
	struct student s[400];
	char *names[]={"rajiv","shahin","tadaa","claua","shidah"};
	int years[]={2016,2018,2019,2022,2016};
	for(int i=0;i<5;i++){
        s[i].roll=i;
        strcpy(s[i].name,names[i]);
        s[i].joiningYear=arr[i];
        strcpy(s[i].department,"cs department");
        strcpy(s[i].course,"bsc cs");

	}
	//joinYear(s,5);
    getInfo(s,5);

	return 0;
}*/

//B-b

struct account{
    int accNum,balance;
    char name[100];
};

void lowBalCus(struct account acc[],int lim){
    for(int i=0;i<lim;i++){
        if(acc[i].balance<1000){
            printf("name : %s\naccount no : %d\n",acc[i].name,acc[i].accNum);
        }
    }
}

void banking(struct account acc[],int lim){
    int accNumber;
    printf("enter account number : ");
    scanf("%d",&accNumber);
    printf("0.withdrawal 1.deposit :");
    int choice;
    scanf("%d",&choice);
    int amount;
    if(choice==0){
        printf("enter withdrawal amount : ");
        scanf("%d",&amount);
        if(amount<1000){
            printf("invalid withdrawl operation\nexiting...");
            return;
        }else{
            if(amount>acc[accNumber].balance){
                printf("insufficient funds\nexiting...");
                return;
            }
            else{
                acc[accNumber].balance-=amount;
                printf("success.\nyour balance is : %d",acc[accNumber].balance);
            }
        }
    }else if(choice==1){
        printf("enter deposit amount : ");
        scanf("%d",&amount);
        acc[accNumber].balance+=amount;
        printf("success\nyour balance is : %d",acc[accNumber].balance);
    }else printf("invalid choice\n");
}

int main(){
    struct account accs[200];
    char *names[]={"rajiv","shahin","tadaa","claua","shidah"};
    int money[]={16,2018,2019,22,2016};
    for(int i=0;i<5;i++){
        accs[i].accNum=i;
        strcpy(accs[i].name,names[i]);
        accs[i].balance=money[i];
    }
    //printf("people with <1000 balance :\n");
    //lowBalCus(accs,5);
    banking(accs,5);
    return 0;
}
