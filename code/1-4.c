#include <stdio.h>

int my_strcmp(const char *a, const char *b){
    while(true){
        if(*a!=*b) return *a-*b;    
        else if (*a=='\0'||*b=='\0') break;
        else {
            a++; b++;
        }
    }
    return 0;
}

int main() {
    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));
}