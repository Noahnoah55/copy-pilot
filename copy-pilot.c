#include<stdio.h>

int main(){
    char c = '\0';
    while (c != EOF) {
        c = getchar();
        putchar(c);
    }
    return 0;
}
