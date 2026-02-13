//A-a
void showWin(char **,int);
int main(){
    char *sports[]={
            "cricket",
            "basketball",
            "football",
            "hockey",
            "lawn tennis",
            "table tennis",
            "carrom",
            "chess"
        };
    int game;
    printf("enter number : ");
    scanf("%d",&game);
    showWin(sports,game);
    return 0;
}
void showWin(char *arr[],int game){
    int j,count=0;
    for(int i=7;i>=0;i--){
        j=game & (1<<i);
        if(j>0){
            printf("%s,",arr[i]);
            count++;
        }
    }
    if(count>=5){
        printf("\nchampion of champions\n");
    }
}
//A-b
#include <stdio.h>
int main(){
    char types[][20]={
                "canine",
                "feline",
                "cetacean",
                "marsupial"
    };
    char eatType[][20]={
        "herbivore",
        "carnivore"
    };
    struct animal{
        char name[50];
        int type;
    };
    struct animal a={"ocelot",18};
    int mask;
    int typeInd=0,eatTypeInd;
    int temp;
    for(int i=3;i>=0;i--){
        mask=1<<i;
        if(temp=a.type & mask!=0){
            typeInd=i;
            break;
        }
    }
    mask=1<<4;
    eatTypeInd=a.type & mask!=0?1:0;
    printf("type : %s\neat type : %s\n",types[typeInd],eatType[eatTypeInd]);
    return 0;
}
