//Write a program to Count vowels and consonants.

#include <stdio.h>
#include <stdio.h>

int main() {
char str[500];
int i;
int v_no=0;
int c_no=0;
int l;
     printf("enter the string :");
    gets(str);
    printf("string is :");
    puts(str);

    l=strlen(str);

    for(i=0;i<l;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        v_no++;
        else
        c_no++;
    }

    printf("no of vowel :%d\nno of constant :%d",v_no,c_no);

    return 0;
}