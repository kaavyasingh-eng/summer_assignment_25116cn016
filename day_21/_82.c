//Write a program to Reverse a string.

#include <stdio.h>
#include<string.h>

int main() {

    char str[100];
    char temp;
    int l;
    int i;

    printf("enter the string :");
    gets(str);
    printf("string is :");
    puts(str);

    l=strlen(str);

    for(i=0;i<l/2;i++){

        temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;

    }
    printf("reversed string is :");
    puts(str);

    return 0;
}