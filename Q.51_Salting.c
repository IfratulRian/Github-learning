#include<stdio.h>
#include<string.h>

void salt(char str[]);

int main(){
    char str[100];
    scanf("%s",str);
    salt(str);
    return 0;
}

void salt(char str[]){
    char salt[]="123";
    char new_str[300];
    strcpy(new_str,str);
    strcat(new_str,salt);
    puts(new_str);
}