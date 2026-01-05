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
