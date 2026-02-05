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

