#include <stdio.h>

//automatic var scope demonstration-
int main(){
    auto int i=0;
    {
        auto int i=1;
        {
            auto int i=2;
            printf("%d\n",i);
        }
        printf("%d\n",i);
    }
    printf("%d\n",i);
}
//static example demonstration -
void increment();
int main(){
    increment();
    increment();
    increment();
    return 0;
}

void increment(){
    auto int i=0;
    static int j=0;
    printf("i-%d j-%d\n",i,j);
    j++;i++;
    return;
}

//global example demonstartion -
int x=0;
void increaseX(){
    x++;
}
int main(){
    printf("%d\n",x);
    x++;
    printf("%d\n",x);
    increaseX();
    printf("%d\n",x);
    return 0;
}
