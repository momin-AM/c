// password checker

int checkPass(char password[]){
    int upper = 0, lower = 0, special = 0,numbers=0;
    printf("enter password : ");
    scanf("%s",password);     
    int i = 0;
    while (password[i] != '\0')
    {
        if (password[i] >= 65 && password[i] <= 90)
            upper = 1;
        else if (password[i] >= 97 && password[i] <= 122)
            lower = 1;
        else if (password[i] >= 48 && password[i] <= 57)
            numbers = 1;
        else if( (password[i] >= 33 && password[i] <= 47) ||
         (password[i] >= 58 && password[i] <= 64) ||
         (password[i] >= 91 && password[i] <= 96) ||
         (password[i] >= 123 && password[i] <= 126) ) special=1;
        i++;
    }
    if(i<6){
        printf("password too short:/\n");
        return 0;
    }
    if (lower == 1 && upper == 1 && special == 1 && numbers==1)
        printf("\"%s\" is a good password:)\n", password);
    else{
        printf("lowercase present? = %d\nuppercase present? = %d\nspecial char present? : %d\nnumber present? = %d",lower, upper, special,numbers);
        return 0;
    }
    return 1;
}

int main()
{   
    char array[50];
    int x,tries=0;

    do{
        if(tries>0) printf("\ntry again!\n\n");
        x=checkPass(array);
        tries++;
    }while(x==0);

    return 0;
}
