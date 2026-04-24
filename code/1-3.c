#include <stdio.h>

char *my_strcat(char *dst, const char *src){

    char new_str[30];
    int count;
    for (int i=0;i<20;i++){
        if (dst[i]=='\0'){
            count=i;
            break;
        }
        new_str[i]=dst[i];
    }
    for (int i=0;i<20;i++){
        new_str[i+count]=src[i];
    }
    printf("%s\n",new_str);
    dst=new_str;
}

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    printf("%s\n",str1);
    my_strcat(str1,str2);
    printf("%s\n",str1);
}