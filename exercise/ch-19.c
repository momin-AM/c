//chapter 19 - file i/o
#include <stdio.h>
/*#include <stdlib.h>
#include <string.h>
//B-a
struct student{
        char name[100];
        int age;
    };
int cmp(const void *a, const void *b){
    struct student *x=a;
    struct student *y=b;
    return strcmp(x->name,y->name);
}
int main(){
    FILE *fp;

    struct student s[4];
    fp=fopen("students.dat","r");
    if(fp==NULL){
        printf("file couldn't open\n");
        return 1;
    }
    for(int i=0;i<4;i++){
        fscanf(fp,"%99s %d",s[i].name,&s[i].age);
    }
    qsort(s,4,sizeof(struct student),cmp);
    for(int i=0;i<4;i++){
        printf("%s\t%d\n",s[i].name,s[i].age);
    }
    fclose(fp);
    return 0;
}*/
/*#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
    int fileA,fileB;
    char buffer[512],inp[128],outp[128];
    printf("enter input file name : ");
    scanf("%s",inp);
    printf("enter output file name : ");
    scanf("%s",outp);
    fileA=open(inp,O_RDONLY);
    if(fileA==-1){
        printf("error opening file\n");
        return 1;
    }
    fileB=open(outp,O_CREAT | O_WRONLY,S_IWRITE);
    if(fileB==-1){
        printf("error creating file\n");
        close(fileA);
        return 2;
    }
    int bytes;
    while((bytes=read(fileA,buffer,512))>0){
        int i=0;
        for(;i<bytes;i++){
            if(buffer[i]>='a' || buffer[i]<='z'){
                buffer[i]-=('a'-'A');
            }
        }
        write(fileB,buffer,bytes);
    }
    close(fileA);close(fileB);
    printf("file copied successfully\n");
    return 0;

}*/

