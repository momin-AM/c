#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <time.h>

int main(){
        srand(time(NULL));
        struct dirent *entry;
        DIR *dir;
        char folder[]="/storage/681E-CA53/samsung_sdcard/Music/GlobalList";
        dir=opendir(folder);
        if(dir==NULL){
                puts("couldn't open dir\n");
                return 1;
        }
        char songs[200][100];
        int sCount=0;
        while((entry=readdir(dir))!=NULL){
                if(entry->d_name[0]=='.') continue;
                strcpy(songs[sCount++],entry->d_name);
        }
        int playCount=0;
        char cmd[250];
        while(1){
        int songInd=rand()%sCount;

        sprintf(cmd,"mpv --really-quiet \"%s/%s\"",folder,songs[songInd]);
        fflush(stdout);
        printf("playing %s(%d)\n",songs[songInd],playCount);
        playCount++;
        system(cmd);
        }
        return 0;
}
