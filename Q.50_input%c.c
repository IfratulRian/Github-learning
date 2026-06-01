#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    int i=0;
    while(ch!='\n'){
        scanf("%c",&ch);
        str[i] = ch;
        i++;
    }//this while loop act like gets() function
    str[i] = '\0'; // Null-terminate the string
    puts(str);
    return 0;
}