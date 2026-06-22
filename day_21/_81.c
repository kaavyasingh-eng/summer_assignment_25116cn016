//Write a program to Find string length without strlen().

#include <stdio.h>

int main() {

    char str[100];
    int i=0;
    int count ;

    printf("enter the string :");
    gets(str);
    printf("string is :");
    puts(str);

    while(str[i]!='\0')
   { i++;
    count++;}

 printf("length of string is :%d\n",count);
    return 0;
}